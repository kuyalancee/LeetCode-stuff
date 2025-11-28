#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int minHeight = INT_MIN;
        int area = INT_MIN;
        for(int i = 0; i < heights.size(); i++) {
            for(int j = i + 1; j < heights.size(); j++) {
                if(heights[i] < heights[j]) {
                    minHeight = heights[i];
                } else {
                    minHeight = heights[j];
                }
                if( (minHeight * (j-i)) > area) {
                    area = minHeight * (j-i);
                }
            }
        }
        return area;
    }
};

//  brute force O(n^2)

//####################

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max = 0;

        while (left < right) {
            int currHeight;
            if(height[left] < height[right]) {
                currHeight = height[left];
            } else {
                currHeight = height[right];
            }

            if(currHeight * (right - left) > max) {
                max = currHeight * (right - left);
            }

            if(height.at(left) < height.at(right)) {
                left++;
            } else {
                right--;
            }
        }
        return max;
    }
};

// optimal solution

//##################

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = 0;

        while (left < right) {
            int width = right - left;
            
            if(height[left] < height[right]) {
                area = max(area, height[left] * width);
                left++;
            } else {
                area = max(area, height[right] * width);
                right--;
            }
        }
        return area;
    }
};

//  refactored solution, solved 11/28

