class Solution {
public:
    void per(int idx,vector<vector<int>> &ans,vector<int> nums,vector<int> num,int n ){
        if(idx==n){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<n;i++){
            swap(nums[i],nums[idx]);
            per(idx+1,ans,nums,num,n);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> num;
        int idx=0;
        int n = nums.size();
        per(idx,ans,nums,num,n);
        return ans;
    }
};