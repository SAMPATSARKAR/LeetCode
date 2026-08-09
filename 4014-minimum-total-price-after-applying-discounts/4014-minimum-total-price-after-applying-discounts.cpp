class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        int n = prices.size();
        int m = discounts.size();
        discounts.resize(n,0);
        int j=0;
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=(double)prices[i]*(100-discounts[i])/100;
 
        }
        return sum;
    }
};