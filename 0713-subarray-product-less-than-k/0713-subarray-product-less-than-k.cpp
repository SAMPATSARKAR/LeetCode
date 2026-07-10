class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        long long mul=1;
        long long count=0;
        while(j<n){
            mul*=nums[j];
            while(mul>=k){
                mul/=nums[i];
                i++;
            }
            count+=(j-i+1);
            j++;
        }
            return count;
    }
};