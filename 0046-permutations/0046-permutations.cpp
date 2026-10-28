class Solution {
public:
    void per(int idx,vector<int> nums,vector<vector<int>> &v,int n){
        if(n==idx){
            v.push_back(nums);
            return;
        }
        for(int i=idx;i<n;i++){
            swap(nums[i],nums[idx]);
            per(idx+1,nums,v,n);
            swap(nums[i],nums[idx]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int idx=0;
        vector<vector<int>> v;
        int n = nums.size();
        per(idx,nums,v,n);
        return v;

    }
};