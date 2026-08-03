class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        long long mul=1;
        while(n){
            int a = n%10;
            sum+=a;
            mul*=1LL* a;
            n=n/10;
        }
        return mul-sum;

    }
};