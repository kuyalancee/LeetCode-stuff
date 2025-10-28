//https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=array

//remove dupes from sorted array

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cntr = 1;
        for(int i = 1; i < nums.size(); ){
            if(nums.at(i) == nums.at(i-1)){
                nums.erase(nums.begin() + i);
            }
            else{ 
                cntr++;
                i++;
            }
        }
        //nums.resize(cntr);
        return cntr;
    }
};

//Solved 10/24/25