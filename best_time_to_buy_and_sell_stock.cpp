class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0, min = 1e5; 
        for (int i=0; i<prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i]; 
            } else {
                mx = max(mx, prices[i] - min); 
            }
        }
        return mx; 
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int first = 0, second = 1; 
        int maxProfit = 0, profit = 0; 
        while (second < prices.size()) {
            if (prices[first] < prices[second]) {
                profit = prices[second] - prices[first]; 
                maxProfit = (profit > maxProfit)? profit : maxProfit; 
                second++; 
            } else {
                first = second; 
                second++; 
            }
        }
        return maxProfit; 
    }
};