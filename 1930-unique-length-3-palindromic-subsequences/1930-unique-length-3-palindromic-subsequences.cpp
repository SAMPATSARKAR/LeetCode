class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<pair<int,int>> p(26,{-1,-1});
        for(int i=0;i<s.length();i++){
            char x = s[i];
            int idx = x-'a';
            if(p[idx].first==-1){
                p[idx].first = i;
            }
            p[idx].second=i;
        }
        int result = 0;
        for(auto x:p){
            unordered_set<int> st;
                int l = x.first;
                int r = x.second;
                if(l == -1){
                    continue;
                }
                for(int i=l+1;i<r;i++){
                    st.insert(s[i]);
                }
                result+=st.size();
        }
        return result;

    }
};