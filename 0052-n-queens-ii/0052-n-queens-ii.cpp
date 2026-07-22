class Solution {
public:
int count=0;
bool isP(vector<string> b,int row,int col){
    for(int i=0;i<b.size();i++){
        if(b[i][col]=='Q') return false;
    }
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(b[i][j]=='Q') return false;
    }
    for(int i=row,j=col;i>=0 && j<b.size();i--,j++){
        if(b[i][j]=='Q') return false;
    }
    return true;
}
void solve(vector<string> b,int row){
    if(row==b.size()){
        count++;
        return;
    }
    for(int i=0;i<b.size();i++){
        if(isP(b,row,i)){
            b[row][i]='Q';
            solve(b,row+1);
            b[row][i]='.';

        }
    }
}
    int totalNQueens(int n) {
        vector<string> b(n,string('.',n));
        solve(b,0);
        return count;
    }
};