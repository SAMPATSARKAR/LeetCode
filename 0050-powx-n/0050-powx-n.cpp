class Solution {
public:
double myPow1(double x,long long n){

        if(n==0) return 1.0;
        double ans = myPow1(x,n/2);
        double res = ans*ans;
        if(n%2==1){
            res*=x;
        }
        return res;
}
    double myPow(double x, int n) {
        long long nn = n;
        if(n<0){
            x=1.0/x;
            nn=-nn;
        }
        return myPow1(x,nn);
    } 
};