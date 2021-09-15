#include "RemoveDuplicates.hpp"

int Solution::removeDuplicatesPointer(vector<int>& nums)
{
    /**
     * @brief 两个指针方法
    **/
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