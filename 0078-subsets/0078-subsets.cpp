class Solution {
public:
    void solve(vector<int> nums,int i,vector<vector<int>> &ans,vector<int> output){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,i+1,ans,output);
        //include
        int e = nums[i];
        output.push_back(e);
        solve(nums,i+1,ans,output);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> output;
        int i=0;
        solve(nums,i,ans,output);
        return ans;
    }
};