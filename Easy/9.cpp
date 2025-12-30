#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long revNum = 0;
        int xCopy = x;
        while (x != 0) {
            int lastDigit = x % 10;
            revNum = revNum * 10 + lastDigit;
            x /= 10;
        }

        return (revNum == xCopy ? true : false);
    }
};