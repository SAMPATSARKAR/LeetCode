class Solution {
public:
    int duplicateNumbersXOR(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto x: arr){
            mp[x]++;
        }
        int ele=0;
        for(auto it : mp){
            if(it.second == 2){
                ele^=it.first;
            }
        }
        return ele;
    }
};