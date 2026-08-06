class Solution {
public:
    int smallestNumber(int n, int t) {
        // int mul=1;
        // int a=n;
        // while(a){
        //     int x = a%10;
        //     mul*=x;
        //     a/=10;

        // }
        // if(mul%t == 0 ){
        //     return n;
        // }else{

        //     return smallestNumber(n+1,t);
        // }
        // int pro=1;
        // do{
        //     int i=n;
        //     pro=1;
        //     while(i>0){
        //         pro *= i%10;
        //         i/=10;
        //     }
        //     n++;
        // }while(pro%t!=0);
        // return n-1;
        int pro=1;
        while(pro%t!=0){
            int i=n;
            pro=1;
            while(i>0){
                pro*=(i%10);
                i/=10;

            }
            if(pro%t==0) break;
            n++;
        }
        return n;

    }
};