class Solution {
public:
    void solve(int open,int close,string output,vector<string> &ans,int n){
        if(output.size()==2*n){
            ans.push_back(output);
            return;
        }
        if(open<n){
            solve(open+1,close,output+"(",ans,n);
        }
        if(open>close){
            solve(open,close+1,output+")",ans,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        string output ;
        vector<string> ans;
        solve(0,0,output,ans,n);
        return ans;
    }
};