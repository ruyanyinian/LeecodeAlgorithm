#include "Array/Easy/66.PlusOne/PlusOne.hpp"


int main()
{
    Solution s;
    vector<int> digits = {1, 2, 3};
    vector<int> ans = s.plusOne(digits);
    for (int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}