class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum=0;
        int pro=1;
        while(x>0){
            int y = x%10;
            sum+=y;
            pro*=y;
            x/=10;
        }
        int z = sum+pro;
        if(n%z == 0){
            return true;
        }
        return false;
    }
};