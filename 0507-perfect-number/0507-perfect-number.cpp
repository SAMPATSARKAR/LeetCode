class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1) return false;
        vector<int> v;
        
        int n = num;
        for(int i=2;i*i<n;i++){
            if(num%i==0){
                v.push_back(i);
                if(i!=n/i){
                    v.push_back(n/i);
                }
            }
        }
        int n1=v.size();
        int sum=1;
        for(int i=0;i<n1;i++){
            sum+=v[i];
        }
        return sum==num;
    }
};