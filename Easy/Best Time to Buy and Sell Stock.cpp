//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1812945210/
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; int maxProfit = 0;
        for (int price : prices){
            if (price < minPrice){
                minPrice = price;
            }
            else if(price - minPrice > maxProfit){
                maxProfit = price - minPrice;
            }
        }
        return maxProfit;
    }
};

//solved 10.27.25 (with AI help) 