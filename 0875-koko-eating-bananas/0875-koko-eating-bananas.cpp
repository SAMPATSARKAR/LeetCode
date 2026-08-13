class Solution {
public:
    long long fun(vector<int> &v, int n, int speed ){
        long long h=0;
        for(int i=0;i<n;i++){
            h = h + v[i]/speed;
            if(v[i]%speed != 0){
                h++;
            }
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int i=1,j=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(i<=j){
            int mid = i+(j-i)/2;// its speed i.e. k bananas in an hour
            long long hr = fun(piles,n,mid); /* here i nedd helper fxn to know if my guess is correct or not. so this is what req in bs on ans(a helper fxn);*/
            if(hr>h){
                i=mid+1;// inc speed
            }else{
                ans=mid;
                j=mid-1;
            }
        }

        return ans;

    }
};