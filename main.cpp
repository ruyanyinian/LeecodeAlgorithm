#include "Array/Easy/88.MergedSortedArray/MergedSortedArray.hpp"

int main()
{
    Solution merged;
    vector<int>nums1 = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    merged.merge(nums1, 3, nums2, 3);
    for (int i=0; i<nums1.size(); i++)
    {
        cout << nums1[i] << endl;
    }
}