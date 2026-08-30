class Solution {
    typedef long long ll;
    const ll MOD = 1e9+7;
public:
    ll myPower(ll x,ll y ){
        if(y==0) return 1.0;
        ll ans = myPower(x,y/2);
        ll res = (ans*ans) %MOD;
        if(y%2==1){
            res=(res*x)%MOD;
        }
        return res;
    }
    int sumDecoded(vector<long long>& nums) {
        ll sum=0;
        for(auto z:nums){
            ll w = z%10;
            z=z/10;

            //count digits

            ll d = z;
            ll count=0;
            while(d>0){
                d=d/10;
                count++;
            }
            ll r = count-w;
            ll p = myPower(10,r);
            ll x = z/p;
            ll y = z%p;

            ll ans = myPower(x,y);
            sum =(sum+ans)%MOD;
        }
        return (int)sum;
    }
};