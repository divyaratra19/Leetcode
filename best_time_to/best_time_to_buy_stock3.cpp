class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        if(n<2)
            return 0;
        int left[n], right[n];
        int LeftMin = prices[0];
        left[0] = 0;
        for(int i=1;i<prices.size();i++){
            left[i] = max(left[i-1], prices[i]-LeftMin);
            //cout<<left[i]<<" ";
            LeftMin = min(LeftMin, prices[i]);
        }
        cout<<endl;
        //right part.
        
        int RightMax = prices[prices.size()-1];
        right[prices.size()-1] = 0;
        
        for(int i=prices.size()-2 ;i>=0;i--){
            right[i] = max(right[i+1], RightMax - prices[i]);
            //cout<<right[i]<<" ";
            RightMax = max(RightMax, prices[i]);
        }
        
        // divide line into left and right.
        
        int profit = right[0];
        for(int i = 1;i<prices.size(); i++){
            profit = max(profit, left[i-1] + right[i]);
            //cout<<profit<<" ";
        }
        
     return profit; 
    }
};
