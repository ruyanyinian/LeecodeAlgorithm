#include "PlusOne.hpp"

vector<int> Solution::plusOne(vector<int>& digits)
{
    vector<int> ans = {};
    for (int i=0; i<digits.size(); i++)
    {
        if (i == digits.size()-1)
        {
            int last_digit = digits[i] + 1;
            ans.push_back(last_digit);
            return ans;
        }
        ans.push_back(digits[i]);
    }
}