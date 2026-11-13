class Solution {
public:
int atMost(vector<int>& nums, int k){
        int r=0,l=0,n=nums.size(),cnt=0;
        map<int,int> mpp;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                l++;
            }
            if(mpp.size()<=k){
                cnt+=r-l+1;
            }
            r++;
        }
        return cnt;

}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};