class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long sum=0;
        int count=0;
        for(auto x:costs){
            sum+=x;
            if(sum<=coins){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
};