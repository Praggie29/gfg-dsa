class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int mins=prices[0],res=0;
        for(int i=1;i<prices.size();i++){
            mins=min(mins,prices[i]);
            res=max(res,prices[i]-mins);
        }
        return res;
    }
};
