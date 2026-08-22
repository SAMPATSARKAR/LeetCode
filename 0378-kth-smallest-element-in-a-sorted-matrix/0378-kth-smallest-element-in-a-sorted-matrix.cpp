class Solution {
public:
    int fun(vector<vector<int>>& matrix,int mid,int r,int c){
        int row = r;
        int col = 0;
        int count=0;
        while(row>=0 && col <= c){
            if(matrix[row][col] <= mid){
                count+= row+1;
                col++;
            }else{
                row--;
            }
        }
        return count;
    } 
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int r = matrix.size()-1;
        int col = matrix[0].size()-1;
        int i = matrix[0][0];
        int j = matrix[n-1][n-1];
        int ans = 0;
        while(i<=j){
            int mid = i+(j-i)/2;
            int a = fun(matrix,mid,r,col);
            if(a<k){
                i=mid+1;
            }else{
                ans = mid;
                j=mid-1;
            }
        }
        return ans;
    }
};