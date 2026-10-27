class Solution {
public:
    int t[1002];
    int robs(vector<int> &nums,int n){
        if(n==0) return 0;
        if(n==1) return nums[n-1];
        if(t[n]!=-1) return t[n];
        return t[n]=max(nums[n-1]+robs(nums,n-2),robs(nums,n-1));

    }
    int rob(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int n =nums.size();
        return robs(nums,n);
    }
};