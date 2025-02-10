class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans;
        int k;
        sort(prices.begin(),prices.end());
        k=prices[0]+prices[1];
        if(k>money || prices[0]>money){
            ans=money;
        }

        else{
            if(k<=money){
                ans=money-k;
            }
        }
        return ans;
    }
};