/*
    LeetCode 49: Group Anagrams
    Given an array of strings strs, group the anagrams together. You can return the answer in any order.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    unordered_map<string, vector<string>> map;
    vector<vector<string>> result;

    for(int i = 0; i < strs.size(); i++) 
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        map[temp].push_back(strs[i]);
    }

    for(auto it = map.begin(); it != map.end(); it++) 
    {
        result.push_back(it->second);
    }

    return result;
}