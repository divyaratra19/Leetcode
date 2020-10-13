class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //int max_so_far=0;
        int diff=0;
        int max_until_now=0;
        for(int i=0; i<prices.size()-1; i++)
        {
            if(prices[i]<prices[i+1])
            {
                diff=prices[i+1]-prices[i];
                max_until_now+=diff;
            }
           // if(max_so_far<max_until_now)
           // {
           //     max_so_far=max_until_now;
           // }
            
        }
        return max_until_now;
    }
};
