/*
    LeetCode 11: Container With Most Water
    You are given an integer array height of length n. 
    There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
    Find two lines that together with the x-axis form a container, 
    such that the container contains the most water.
    Return the maximum amount of water a container can store.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int>& height) 
{
    int max_area = 0;

    int left = 0;
    int right = height.size() - 1;

    while (left < right)
    {
        int area = min(height[left], height[right]) * (right - left);
        max_area = max(max_area, area);

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return max_area;
}

