/*
    LeetCode 15: 3Sum
    Given an integer array nums, 
    return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
    Notice that the solution set must not contain duplicate triplets.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
    vector<vector<int>> result;

    if(nums.size() < 3) 
        return result;

    // sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size() - 2; i++) 
    {
        if(i == 0 || (i > 0 && nums[i] != nums[i - 1])) 
        {
            int low = i + 1, high = nums.size() - 1, sum = 0 - nums[i];

            while(low < high) 
            {
                if(nums[low] + nums[high] == sum) 
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    result.push_back(temp);
                    while(low < high && nums[low] == nums[low + 1]) 
                        low++;
                    while(low < high && nums[high] == nums[high - 1]) 
                        high--;
                        
                    low++;
                    high--;
                } 
                else if(nums[low] + nums[high] < sum) 
                    low++;
                else 
                    high--;
            }
        }
    }
    return result;
}