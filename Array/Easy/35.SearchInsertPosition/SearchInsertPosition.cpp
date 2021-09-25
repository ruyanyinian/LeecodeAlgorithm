#include "SearchInsertPosition.hpp"

int Solution::searchInsert(vector<int>& nums, int target)
{
    if (nums.size() == 0)   { return -1; }
    int left = 0;
    int right = nums.size() - 1;
    while (left<=right)
    {
        int mid = (int)((left+right)/2);
        if (nums[mid]==target) { return mid; }
        nums[mid]>target ?  right=mid-1 : left=mid+1;
    }
    return left;
}