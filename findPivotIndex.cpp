/*
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

 

Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
  */
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       
        for(int i=0;i<nums.size();i++)
        {
            int leftsum=0,rightsum=0;  //totalsum-nums[i]-leftsum==leftsum
            if(i==0)
            {
                for(int j=1;j<nums.size();j++)
                rightsum+=nums[j];
                if(rightsum==0)
                return 0;
            }
            else if(i==nums.size()-1)
            {
                for(int j=0;j<nums.size()-1;j++)
                leftsum+=nums[j];
                if(leftsum==0)
                return (i);
            }
            else
            {
                for(int j=0;j<i;j++)
                leftsum+=nums[j];
                for(int j=i+1;j<nums.size();j++)
                rightsum+=nums[j];
                if(leftsum==rightsum)
                return i;
            }

        }
        return -1;
    }
};
