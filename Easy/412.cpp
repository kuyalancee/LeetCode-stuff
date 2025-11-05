//https://leetcode.com/problems/fizz-buzz/description/
//FizzBuzz

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> myVec;
        for(int i = 1; i < n+1; i++){
            if(i % 3 == 0 && i % 5 == 0){
                myVec.push_back("FizzBuzz");
            }else if(i % 3 == 0){
                myVec.push_back("Fizz");
            }else if(i % 5 == 0){
                myVec.push_back("Buzz");
            }else{
                myVec.push_back(to_string(i));
            }
        }
        return myVec;
    }
};

//solved 11/4/2025, time complexity O(n), space complexity O(n)