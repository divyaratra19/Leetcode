class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        if(prices.size()<2)
            return 0;
        int minEle=prices[0];
        for(int i=0; i<prices.size(); i++)
        {
            profit=max(profit, prices[i]-minEle);
            minEle=min(minEle, prices[i]);
        }
        return profit;
    }
};
