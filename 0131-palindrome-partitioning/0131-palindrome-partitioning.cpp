class Solution {
public:
    bool isPalindrome(string s, int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;r--;
        }
        return true;
    }
    void per1(string s,int idx,vector<string> temp,vector<vector<string>>& ans){
        int n = s.size();
        if(idx == n){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<n;i++){
            if(isPalindrome(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                per1(s,i+1,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> temp;
        int idx = 0;
        per1(s,idx,temp,ans);
        return ans;
    }

};