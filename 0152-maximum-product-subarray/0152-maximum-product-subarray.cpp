class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int sum=1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            sum*=nums[i];
            ans=max(ans,sum);
            if(sum==0){
                sum=1;
            }
        }
        int ans1=INT_MIN;
        int sum1=1;
        for(int i=n-1;i>=0;i--){
            sum1*=nums[i];
            ans1=max(ans1,sum1);
            if(sum1==0){
                sum1=1;
            }
        }
        return max(ans1,ans);
    }
};