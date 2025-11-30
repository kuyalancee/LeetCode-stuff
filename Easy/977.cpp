#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/squares-of-a-sorted-array/
//squares of a sorted array
//solved 11.30.25

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;  // left var
        int j = nums.size() - 1;    // right var
        int k = nums.size() - 1;    // track position var
        vector<int> newNums(nums.size());

        while(i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                newNums[k] = nums[i] * nums[i];
                i++;
            } else {
                newNums[k] = nums[j] * nums[j];
                j--;
            }
            k--;
        }

        return newNums;
    }
};