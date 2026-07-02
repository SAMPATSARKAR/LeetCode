class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long cnt=0;
        for(auto x: s){
            if(c==x){
                cnt++;
            }
        }
        return (cnt*(cnt+1))/2;
    }
};