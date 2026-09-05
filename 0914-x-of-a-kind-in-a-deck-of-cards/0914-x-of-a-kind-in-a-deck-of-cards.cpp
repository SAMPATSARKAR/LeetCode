class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mpp;
        for(int i=0;i<deck.size();i++){
            mpp[deck[i]]++;
        }
        int g=0;
        for(auto x: mpp){
            g=gcd(g,x.second);
        }
        return g>=2;
    }
};