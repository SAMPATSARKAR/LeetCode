class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mpp;
        for(auto x:s){
            mpp[x]++;
        }
        int sum=0;
        bool count=false;
        for(auto x:mpp){
            if(x.second%2==0){
                sum+=x.second;
            }else{
                sum+=x.second-1;
                count=true;
            }
        }
        if(count){
            sum+=1;
        }
        return sum;
    }
};