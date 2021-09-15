#include "RemoveElement.hpp"

int Solution::removeElement(vector<int>& nums, int val)
{
    /**
     * @brief o(n)空间复杂度
    **/
    vector<int> ans = {};
    if (nums.size()==0)
    {
        return 0;
    }
    for (int i=0; i<nums.size(); i++)
    {
        if (nums[i]!=val)
        {
            ans.push_back(nums[i]);
        }
    }
    return ans.size();
}