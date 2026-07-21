class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        for(auto &x:grid){
            sort(x.rbegin(),x.rend());

        }
        int mx;
        int sum=0;
        for(int i=0;i<col;i++){
            mx=0;
            for(int j=0;j<row;j++){
                mx = max(mx,grid[j][i]);
            }
            sum+=mx;
        }
        return sum;
    }
};