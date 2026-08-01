class Solution {
public:
    int solve(int i,int j,int n,int m,vector<vector<int>> &dp,vector<vector<int>> &og){

            if(i>=n || j>=m || og[i][j]!=0){
                return 0;
            }
            if(i==n-1 && j==m-1) return 1;
            if(dp[i][j]!=-1){
                return dp[i][j];
            }
            return dp[i][j]=solve(i+1,j,n,m,dp,og)+solve(i,j+1,n,m,dp,og);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int m = og[0].size();//col
        int n = og.size();//row
        vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
        return solve(0,0,n,m,dp,og);
    }
};