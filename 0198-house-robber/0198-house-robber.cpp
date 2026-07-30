class Solution {
public:
int solve(int ind, vector<int> &v,vector<int> &dp){
    int n = v.size();
    if(ind >=n) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick=0,notpick=0;
    pick=v[ind] + solve(ind+2,v,dp);
    notpick = 0 + solve(ind+1,v,dp);
    return dp[ind] = max(pick,notpick);
}
    int rob(vector<int>& nums) {
        int n =  nums.size();
        vector<int> dp(n+1,-1);
        vector<int> v;
        return solve(0,nums,dp);

    }
};