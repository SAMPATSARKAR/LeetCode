class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> m(26,0);
        int n = magazine.size();
        for(int i=0;i<n;i++){
            m[magazine[i]-'a']++;
        }
        for(auto x:ransomNote){
            if(m[x-'a']==0) return false;
            m[x-'a']--;
        }
        return true;
    }
};