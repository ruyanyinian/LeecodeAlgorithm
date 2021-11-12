#include "Array/medium/11.ContainWithMostWater/ContainWithMostWater.hpp"


int main()
{
    vector<int> a{4,3,2,1,4};
    Solution s;
    int ans = s.maxArea(a);
    cout << ans <<endl;
    return 0;
}