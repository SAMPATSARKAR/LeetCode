class Solution {
public:
    int sol(int n){
        int count=0;
        while(n>0){
            n=n&(n-1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> x;
        for(int i=0;i<=n;i++){
            x.push_back(sol(i));
        }
        return x;
    }
};