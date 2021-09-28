#include "PlusOne.hpp"

vector<int> Solution::plusOne(vector<int>& digits)
{
    if((digits.back()+1)<10)
    {
        digits.back()++;
        return digits;
    }
    else
    {
        int sum = digits.back() + 1;
        digits.back() = sum % 10;
        int borrow = sum / 10;
        int i;
        
        for(i=digits.size()-2; i>=0 && borrow>0; i--)
        {
            sum=digits[i] + borrow;
            digits[i]=sum%10;
            borrow = sum / 10;
        }
        
        if(i<=0 && borrow>0)
        {
            digits.insert(digits.begin(), borrow);
        }
    }
    return digits;
}