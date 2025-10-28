//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

//two sum 2

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while(left < right){
            int sum = numbers.at(left) + numbers.at(right);
            if(sum == target)
                return {left+1, right+1};
            else if(sum < target)
                left++;
            else
                right--;
        }
    return {};
    }
};


//solved 10.19.25