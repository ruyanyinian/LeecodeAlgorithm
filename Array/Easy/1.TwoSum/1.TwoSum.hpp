#ifndef TwoSum_hpp
#define TwoSum_hpp
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSumBruteForce(vector<int>& nums, int target);
    vector<int> twoSumHashMap(vector<int>& nums, int target);
};
#endif