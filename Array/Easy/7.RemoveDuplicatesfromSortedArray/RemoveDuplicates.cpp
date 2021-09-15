#include "RemoveDuplicates.hpp"

int Solution::removeDuplicates(vector<int>& nums)
{
    int pos = 1;
    if (nums.size()==0)
    {
        return 0;
    }
    for (int i=1; i<nums.size(); i++)
    {
        if(nums[i] == nums[pos-1])
        {
            continue;
        }
        else
        {
            nums[pos] = nums[i];
            pos++;
        }
    }
    return pos; 
}