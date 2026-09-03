class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        for(int i=0;i<2;i++){
            int sum=prices[i]+prices[i+1];
            if(sum==money){
                return 0;
            }
            else if(sum>money){
                return money;
            }
            else{
                return (money-sum);
            }
        }
        return money;
    }
};