class Solution {
public:
    int numberOfSubstrings(string s) {
        int sum=0;
        int l=0,r=0;
        int arr[3]={0};
        int cnt=0;
        int n = s.size();
        while(r<n){
            if((arr[s[r]-'a'])==0) cnt++;
            (arr[s[r]-'a'])++;
            while(cnt==3){
                sum+=(n-r);
                (arr[s[l]-'a'])--;
                if((arr[s[l]-'a'])==0)cnt--;
                l++;
            }
            r++;
        }
        return sum;

    }
};