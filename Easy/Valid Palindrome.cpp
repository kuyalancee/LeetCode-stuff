//https://leetcode.com/problems/valid-palindrome/

#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c){return !isalnum(c);}), s.end());
        string myStr = s;
        for(auto &myCh : s) myCh = tolower(myCh);
        for(auto &myCh : myStr) myCh = tolower(myCh);
        reverse(myStr.begin(), myStr.end());
        return myStr == s;
    }
};

//solved 10.19.25