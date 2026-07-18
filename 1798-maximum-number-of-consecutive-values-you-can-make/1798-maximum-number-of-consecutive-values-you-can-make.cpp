class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(),coins.end());
        int reach = 0;
        for(auto coin:coins){
            if(coin<=reach+1){
                reach+=coin;
            }

        }
        return reach+1;
    }
};