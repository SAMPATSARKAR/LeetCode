class Solution {
public:
    int minRotations(string s) {
        int ans=0,n=10;
        if(s[0]!='0'){
            ans+=min(abs('0'-s[0]),10-abs('0'-s[0]));
        }
        for(int i=0;i<9;i++){
            ans+=min(abs(s[i]-s[i+1]),10-abs(s[i]-s[i+1]));
        }
        return ans;
    }
};