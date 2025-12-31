// https://neetcode.io/problems/two-integer-sum/question
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        for (int i = 0; i < nums.size(); ++i) {
            int test = target - nums.at(i);

            if(myMap.count(test)) 
                return {myMap[test], i};

            myMap[nums[i]] = i;
        }

        return {};
    }
};
