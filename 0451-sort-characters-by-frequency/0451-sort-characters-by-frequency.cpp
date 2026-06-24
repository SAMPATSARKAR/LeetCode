class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        vector<pair<int,char>> v;
        for(auto x: mp){
            v.push_back({x.second,x.first});
        }
        sort(v.rbegin(),v.rend());
        string ans="";
        for(auto x:v){
            char ch = x.second;
            int freq = x.first;
            while(freq--){
                ans+=ch;

            }
        }
        return ans;
    }
};