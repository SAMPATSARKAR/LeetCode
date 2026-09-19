class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int> mpp;
       for(auto x:s){
        mpp[x]++;
       } 
       int count=0;
       int sum=0;
       for(auto x:mpp){
        int a = x.second;
        if(a%2==0){
            sum+=a;
        }else{
            sum+=a-1;
            count++;
        }
       }
       if(count>0){
        sum+=1;
       }
       return sum;

    }
};