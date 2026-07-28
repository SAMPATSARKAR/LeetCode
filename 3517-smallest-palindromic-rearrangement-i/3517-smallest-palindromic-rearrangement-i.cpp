class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int x = n/2;
        sort(s.begin(),s.begin()+x);
        for(int i=0;i<x;i++){
            s[n-i-1]=s[i];
        }

        return s;
    }
};