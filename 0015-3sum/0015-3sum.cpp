class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int r=n-1;
            int sum=-nums[i];

            while(l<r){
                if(sum==nums[l]+nums[r]){
                    v.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1]){
                        l++;
                    }
                    while(r>l && nums[r]==nums[r-1]){
                        r--;
                    }
                    l++;r--;
                }else if( sum>nums[l]+nums[r]){
                    l++;
                }else{
                    r--;
                }
                // l++;r--;
            }

        }
        return v;
        
    }
};