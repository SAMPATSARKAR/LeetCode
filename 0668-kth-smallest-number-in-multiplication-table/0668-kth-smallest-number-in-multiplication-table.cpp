class Solution {
public:
    int fun(int mid,int m,int n){
        int count=0;
        for(int r = 1;r<=m;r++){
            count+= min(n,mid/r);
        }
        return count;

    }
    int findKthNumber(int m, int n, int k) {
        int i = 1,j=m*n;
        int ans=0;
        while(i<=j){
            int mid = i+(j-i)/2;
            int a = fun(mid,m,n);
            if(a<k){
                i=mid+1;
            }else{
                ans = mid;
                j=mid-1;
            }
        }
        return ans;
    }
};