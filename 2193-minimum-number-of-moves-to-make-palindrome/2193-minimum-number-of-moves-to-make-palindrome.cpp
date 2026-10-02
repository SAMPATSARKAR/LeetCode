class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;j--;
                continue;
            }
            int k=j;
            while(k>i && s[k]!=s[i]){
                k--;
            }
            if( k == i ){       //no pair elemnt, so swap it till middle
                swap(s[i],s[i+1]);
                ans++;
            }else{
                while( k<j ){
                    swap(s[k],s[k+1]);
                    k++;
                    ans++;
                }
                i++;
                j--;
            }

        }
        return ans;
    }
};