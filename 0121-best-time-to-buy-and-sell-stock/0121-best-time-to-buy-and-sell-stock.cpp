class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins=prices[0],maxp=0;
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-mins;
            maxp=max(cost,maxp);
            mins=min(mins,prices[i]);
        }
        return maxp;
    }
};