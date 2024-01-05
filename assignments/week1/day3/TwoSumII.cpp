/*
    LeetCode 167: Two Sum II - Input array is sorted
    Given an array of integers numbers that is already sorted in non-decreasing order, 
    find two numbers such that they add up to a specific target number.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {

    unordered_map<int, int> map;
    vector<int> result(2);

    for(int i = 0; i < numbers.size(); i++) 
    {
        int complement = target - numbers[i];
        if(map.find(complement) != map.end()) 
        {
            result.push_back(map[complement] + 1);
            result.push_back(i + 1);
            return result;
        }
        map[numbers[i]] = i;
    }

    return result;
}