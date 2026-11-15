class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0;
        map<int,int> mpp;
        int ans=INT_MIN;
        while(r<n){
            mpp[nums[r]]++;
            if(mpp[nums[r]]<=k){
                ans=max(ans,r-l+1);
            }
            while(mpp[nums[r]]>k){
                mpp[nums[l]]--;
                l++;
            }
            r++;
        }
        return ans;
    }
};