class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long n = chalk.size();
        long long sum=0;
        // vector<int> pre(n);
        // pre[0]=chalk[0];
        // for(int i=1;i<n-1;i++){
        //     pre[i]=pre[i-1]+chalk[i];
        // }
        for(long long i=0;i<n;i++){
            sum+=chalk[i];
        }

        long long x = k%sum;
        int i=0;
        for(;i<n;i++){
            // if(x>chalk[i]){
            //     x-=chalk[i];
            //     break;
            // }
            if(x<chalk[i]){
                return i;
            }
            x-=chalk[i];
        }
        return 0;


    }
};