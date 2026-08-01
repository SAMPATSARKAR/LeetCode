class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        vector<int> vt(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            vt[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=vt[i]){
                return false;
            }
        }
        return true;

    }
};