#include "RemoveElement.hpp"

int main()
{
    Solution remove;
    vector<int> nums = {3,2,2,3};
    int length = remove.removeElement(nums, 3);
    cout << length << endl;
    return 0;
}