class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> v;
        int count=0;
        while(n>0){
            if(n&1){
                v.push_back(count);
            }
            count++;
            n=n>>1;
        }
        int even=0,odd=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0){
                even++;
            }else{
                odd++;
            }
            
        }
        return {even,odd};

    }
};