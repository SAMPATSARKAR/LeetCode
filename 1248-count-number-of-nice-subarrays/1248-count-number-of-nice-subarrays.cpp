class Solution {
public:
    int atMost(vector<int>& nums, int k){

        int l=0,r=0,n=nums.size();
        // map<int,int> mpp;
        int cnt=0,ans=0;
        while(r<n){

            if((nums[r]%2)==1){
                cnt++;
            }
            // mpp[nums[r]]++;
            while(cnt > k ){
                // mpp[nums[r]]--;
                if(nums[l]%2==1){
                    // if(mpp[nums[r]]==0){
                    cnt--;

                    // }
                } 
                l++;
            }
            if(cnt<=k){
                ans+=r-l+1;
            }

            r++;

        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};