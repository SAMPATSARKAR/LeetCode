class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        int ans=0;
        if(x<0) return false;
        while(y){
            int a = y%10;
            if((ans>(INT_MAX-a)/10)){
                return false;
            }
            ans=ans*10+a;
            y/=10;
        }
        cout<<ans<<" "<<x<<endl;
        return ans==x;
    }
};