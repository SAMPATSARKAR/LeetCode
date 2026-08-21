class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int r =matrix.size();
        int col = matrix[0].size();
        int n = matrix.size();
        int r = n-1;
        int c = 0;
        while(r>=0 && c<col){
            if(matrix[r][c] == target){
                return true;
            }else if(matrix[r][c]>target){
                r--;
            }else{
                c++;
            }
        }
        return false;
    }
};