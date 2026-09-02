class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l = i+1;
            int r = n-1;
            int sum = -nums[i];
            while(l<r){//2-Sum
                int s = nums[l]+nums[r];
                if(sum == s){
                    res.push_back({nums[l],nums[r],nums[i]});
                    r--;
                    l++;
                    while(l<n && nums[l]==nums[l-1]){
                        l++;
                    }
                    while(r>=0 && nums[r]==nums[r+1]){
                        r--;
                    }
                }else if(s<sum){
                    l++;
                }else{
                    r--;
                }


            }
        }
        return res;
    }
};