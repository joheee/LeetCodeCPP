class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = std::numeric_limits<int>::max();

        for(int i = 0; i < prices.size(); i++) {
            // compare the iterate price with store minPrice
            minPrice = min(minPrice, prices[i]);
            // if the iterate profit is bigger then the stored maxProfit
            int currMaxProfit = abs(minPrice - prices[i]);
            if(currMaxProfit > maxProfit) maxProfit = currMaxProfit; 
        }
        return maxProfit;
    }
};