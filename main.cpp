#include "Array/Easy/1.TwoSum/1.TwoSum.hpp"

int main()
{
    Solution twoSumAns;
    vector<int> numsInput = {2, 7, 11, 15};
    vector<int> ans;
    int target = 9;
    ans = twoSumAns.twoSumBruteForce(numsInput, 9);
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << endl;
    }
    return 0; 
}