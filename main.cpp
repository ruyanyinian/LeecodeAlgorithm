#include "include/Array/Easy/TwoSum.hpp"
#include "include/Array/Array.hpp"
int main()
{
    //Solution remove;
    //vector<int> nums = {3,2,2,3};
    //int length = remove.removeElement(nums, 3);
    //cout << length << endl;
    Solution s;
    Array a;
    vector<int> nums = {1, 2, 3, 4};
    int val = 3;
    vector<int> ans = s.twoSumHashMapOneIters(nums, val);
    a.print(ans);
    return 0;
}