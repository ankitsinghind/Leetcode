class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max_profit = 0;
        int n = prices.size();

        int lowest = INT_MAX;

        // Find lowest no.
        for (int i = 0; i < n; i++) {
            if (prices[i] < lowest) {
                lowest = prices[i];
            }

            int profit = prices[i] - lowest;

            // Find max profit
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
        return max_profit;

        /*
            // Got tle
            // By bruteforce i can subtract each element to all the other
            // elements and find the max result i get

            int max_profit = 0;
        int n = prices.size();

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                int profit = prices[j] - prices[i];

                if (profit > max_profit) {
                    max_profit = profit;
                }
            }
        }
        return max_profit;
        */
    }
};
