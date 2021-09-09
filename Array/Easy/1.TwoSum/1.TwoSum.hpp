#ifndef TwoSum_hpp
#define TwoSum_hpp
#define USEVEC
#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    vector<int> twoSumBruteForce(vector<int>& nums, int target);
    vector<int> twoSumHashMap(vector<int>& nums, int target);
};
#endif