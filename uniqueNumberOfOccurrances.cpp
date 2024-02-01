/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
  */
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int count=1;
        for(int i=0;i<arr.size();i=i+count)
        {
            count=1;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                 count++;
                else
                 break;
            }
            ans.push_back(count);
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++)
          if(ans[i]==ans[i+1])
           return false;
        return true;
    }
};
