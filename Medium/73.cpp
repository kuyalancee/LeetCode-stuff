#include <bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();      //rows size 
        int n = matrix[0].size();   //cols size

        bool isFirstRowZero = false;
        bool isFirstColZero = false;

        // check if zeros in first row and col
        for (int j = 0; j < n; ++j) {
            if (matrix[0][j] == 0) {
                isFirstRowZero = true;
                break;
            }
        }

        for (int i = 0; i < m; ++i) {
            if (matrix[i][0] == 0) {
                isFirstColZero = true;
            }
        }

        // mark on first pass
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // fill on second pass 
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }


        // do flags
        if (isFirstRowZero) {
            for (int j = 0; j < n; ++j) {
                matrix[0][j] = 0;
            }
        }

        if (isFirstColZero) {
            for (int i = 0; i < m; ++i) {
                matrix[i][0] = 0;
            }
        }
    }
};