#include "1.TwoSum.hpp"
#ifdef USEVEC
vector<int> Solution::twoSumBruteForce(vector<int>& nums, int target)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i+1; j < nums.size(); ++j)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
#else
vector<int> Solution::twoSumHashMap(vector<int>& nums, int target)
{
    vector<int> ans = {1,2,3};
    return ans;
}
#endif