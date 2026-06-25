class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long Currprod=1;
        long long maxProd = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            Currprod*=nums[i];
            maxProd = max(Currprod,maxProd);
            if(Currprod == 0){
                Currprod=1;
            }
        }
        Currprod=1;
        for(int i=n-1;i>=0;i--){
            Currprod *= nums[i];
            maxProd = max(Currprod,maxProd);
            if(Currprod == 0){
                Currprod=1;
            }
        }
        return (int)maxProd;
    }
};