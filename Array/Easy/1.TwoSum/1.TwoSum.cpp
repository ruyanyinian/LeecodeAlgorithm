#include "1.TwoSum.hpp"
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

vector<int> Solution::twoSumHashMap(vector<int>& nums, int target)
{
    /**
     * @brief hashmap方法。过程如下
     * 1.先遍历一遍数组, 然后把值当做key,数组index当成value存储到hashmap,这样方便我们对index查找
     * 2.然后再次遍历数组, 计算target和数组的值得差,因为如果有满足条件的差值必定在hashmap中
     * 3.然后我们根据差值找到对应的index,这就是hashmap的好处, 我们把index当做值可以很方便的查找
     * 4.当然不能同一个元素相加等于target
    **/
    vector<int> ans;
    map<int,int>hashmap;
    for (int i = 0 ; i < nums.size(); i++)
    {
        hashmap[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if (hashmap.count(diff) == 1)
        {
            if (hashmap[diff] != i)
            {
                ans = {i, hashmap[diff]};
                return ans; 
            }
        }
    }
    return ans;
}

