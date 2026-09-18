class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(auto x: strs){
            auto y=x;
            sort(y.begin(),y.end());
            
            mpp[y].push_back(x);
        }
        vector<vector<string>> v;
        for(auto x: mpp){
            v.push_back(x.second);
        }
        return v;
    }
};