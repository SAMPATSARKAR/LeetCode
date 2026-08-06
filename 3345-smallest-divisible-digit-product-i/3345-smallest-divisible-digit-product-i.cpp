class Solution {
public:
    int smallestNumber(int n, int t) {
        int mul=1;
        int a=n;
        while(a){
            int x = a%10;
            mul*=x;
            a/=10;

        }
        if(mul%t == 0 ){
            return n;
        }else{

            return smallestNumber(n+1,t);
        }
    }
};