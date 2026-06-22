class Solution {
public:
    int reverse(int x) {
        int y=x;
        int val=0;
        while(y!=0){
            int digit = y%10;
            if(val > INT_MAX/10 || val <INT_MIN/10){
                return 0;
            }
            val=val*10+digit;
            y=y/10;
        }
        return val;
    }
};