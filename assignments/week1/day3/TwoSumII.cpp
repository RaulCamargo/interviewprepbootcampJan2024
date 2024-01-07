/*
    LeetCode 167: Two Sum II - Input array is sorted
    Given an array of integers numbers that is already sorted in non-decreasing order, 
    find two numbers such that they add up to a specific target number.
    Your solution must use only constant extra space.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) 
{
    int left = 0;
    int right = numbers.size() - 1;

    vector<int> result = {left, right};

    while (left < right)
    {
        int sum = numbers[left] + numbers[right];

        if (sum == target)
        {
            result[0] = left + 1;
            result[1] = right + 1;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return result;
}