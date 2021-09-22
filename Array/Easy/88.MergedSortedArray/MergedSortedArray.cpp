#include "MergedSortedArray.hpp"

void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int p = 0;
    while (p < n)
    {
        nums1[m] = nums2[p];
        p++;
        m++;
    }
    sort(nums1.begin(), nums1.end());
}
