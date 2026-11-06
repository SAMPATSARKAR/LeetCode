class Solution {
public:
    int sub1(vector<int>& nums, int k){
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int sum=0,cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];

            int rem = sum-k;
            cnt+=mpp[rem];
            
            mpp[sum]+=1;
            
        }
        return cnt;
    }
    int subarraySum(vector<int>& nums, int k) {
        
        return sub1(nums,k);

    }
};