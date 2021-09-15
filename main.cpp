#include "RemoveDuplicates.hpp"

int main()
{
    Solution remove;
    vector<int> nums = {1, 1, 2, 2, 3};
    int length = remove.removeDuplicates(nums);
    cout << length << endl;
    return 0;
}