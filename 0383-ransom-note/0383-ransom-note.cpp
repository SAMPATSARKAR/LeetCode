class Solution {
public:
    bool canConstruct(string r, string m) {
        vector<int> v(26,0);
        for(int i=0;i<m.size();i++){
            v[m[i]-'a']++;
        }
        for(auto x:r){
            v[x-'a']--;

        }
        for(int i=0;i<26;i++){
            if(v[i]<0){
                return false;
            }
        }
        return true;
    }
};