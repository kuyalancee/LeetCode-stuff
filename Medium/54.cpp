//https://leetcode.com/problems/spiral-matrix/

using namespace std;
#include <bits/stdc++.h>

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;

        int m = matrix.size();   //num of rows
        int n = matrix[0].size();    //num of cols

        int top = 0, left = 0;
        int right = n - 1, bottom = m - 1;

        while (left <= right && top <= bottom) {
            for (int col = left; col <= right; ++col) {
                res.push_back(matrix[top][col]);
            }
            ++top;

            for (int row = top; row <= bottom; ++row) {
                res.push_back(matrix[row][right]);
            }
            --right;

            if (top <= bottom) {
                for (int col = right; col >= left; --col) {
                    res.push_back(matrix[bottom][col]);
                }
            }
            --bottom;

            if (left <= right) {
                for (int row = bottom; row >= top; --row) {
                    res.push_back(matrix[row][left]);
                }
            }
            ++left;
        }
        return res;
    }
};