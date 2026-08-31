// LC 121 - Best Time to Buy and Sell Stock

// Linear Pass (Maintain Lowest Buy Price)
// TC - O(N)
// SC - O(1)
int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i=1; i<prices.size();++i){
            maxProfit = max(maxProfit , prices[i]-minPrice);
            
            minPrice = min(minPrice , prices[i]);
        }
        return maxProfit;
    }

// Sliding Window (Variable)
// TC - O(N)
// SC - O(1)
int maxProfit(vector<int>& prices) {
        int l = 0;
        int maxProfit = 0;
        for(int r=1; r<prices.size(); ++r){
            maxProfit = max(maxProfit , prices[r] - prices[l]);

            if(prices[r] < prices[l]){
                l = r;
            }
        }
        return maxProfit;
    }
