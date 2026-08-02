class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int> mp;
        int n = s.size();
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count=0;
        for(auto x: mp){
            if(x.second%2==1){
                count++;
            }
        }
        if(count>k){
            return false;
        }
        if(k>n){
            return false;
        }
        return true;

    }
};