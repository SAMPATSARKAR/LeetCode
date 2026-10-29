class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();

        vector<vector<int>> v;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        for(auto x: v){
            int r1=x[0];
            int c1=x[1];
            for(int i=0;i<r;i++){
                matrix[i][c1]=0;
            }
            for(int i=0;i<c;i++){
                matrix[r1][i]=0;
            }
        }
    }
};