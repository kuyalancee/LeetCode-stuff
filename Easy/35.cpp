//https://leetcode.com/problems/search-insert-position/?envType=problem-list-v2&envId=array
#include <vector>
using namespace std;

//search insert position

//two pointer approach

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(target == nums.at(mid)){
                return mid;
            }
            else if(target > nums.at(mid)){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return left;

    }
};

//solved 10.24.25 (with AI help)