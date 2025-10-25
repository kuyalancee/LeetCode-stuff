//https://leetcode.com/problems/remove-element/?envType=problem-list-v2&envId=array

#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cntr = 0;
        for(int i =0; i<nums.size(); i++)
        {
            if(nums.at(i) != val)
            {
                nums.at(cntr) = nums.at(i);
                cntr++;
            }
        }
        nums.resize(cntr);
        return cntr;
    }
};

//Done Feb 25, 2025