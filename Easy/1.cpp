//https://leetcode.com/problems/two-sum/description/

//twosum

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums.at(i) + nums.at(j) == target)
                    return {i,j};
            }
        }
        return {};
    }
};

//Time complexity is O(n^2)
//Space complexity is O(1)
//solved 10.19.25