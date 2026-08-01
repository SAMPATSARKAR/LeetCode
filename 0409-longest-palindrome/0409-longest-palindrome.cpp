class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char,int> v;
        for(int i=0;i<s.size();i++){
            v[s[i]]++;
        }
        int sum=0;
        int count=0;
        for(auto x: v){
            if(x.second%2==0){
                sum+=x.second;
            }else{
                sum+=x.second-1;
                count++;
            }
        }
        return (count>=1) ? sum+1 : sum;


        
    }
};