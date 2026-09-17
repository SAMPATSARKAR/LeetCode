class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int sum=0;
        bool count=false;
        for(auto x: mp){
            if(x.second%2==0){
                sum+=x.second;
            }
            else{
                sum+=x.second-1;
                count=true;
            }
        }
        if(count){
            return sum+1;
        }
        return sum;
    }
};