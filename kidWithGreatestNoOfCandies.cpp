/* There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.

 

Example 1:

Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] */
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int max=0;
        for(int i=0;i<candies.size();i++)
        if(candies[i]>max)
        max=candies[i];     //max=*max_element(candies.begin(),candies.end())
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            result[i]=true;
            else
            result[i]=false;
        }
        return result;

    }
};
