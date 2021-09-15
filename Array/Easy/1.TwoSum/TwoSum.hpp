#ifndef TwoSum_hpp
#define TwoSum_hpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSumBruteForce(vector<int>& nums, int target);
    vector<int> twoSumHashMapTwoIters(vector<int>& nums, int target);
    vector<int> twoSumHashMapOneIters(vector<int>& nums, int target);
};
#endif