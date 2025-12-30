#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reversedNum = 0;
        while(x != 0) {
            if (reversedNum > INT_MAX / 10 || reversedNum < INT_MIN / 10) return 0;
            int lastDigit = x % 10;
            reversedNum = reversedNum * 10 + lastDigit;
            x = x / 10;
        }

        return reversedNum;
    }
};