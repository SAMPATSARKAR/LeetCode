class Solution {
#define MOD 1000000007
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+arr[i];
        }
        int even=1,odd=0,cnt=0;
        for(int i=1;i<=n;i++){
            if(pre[i]%2==0){
                cnt=(cnt+odd) % MOD;
                even++;
            }else{
                cnt=(cnt+even) % MOD;
                odd++;
            }
        }
        return cnt;
    }
};