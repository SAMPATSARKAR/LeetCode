class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int n = nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum1=nums[i];
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int sum2=nums[j];
                int l=j+1;
                int r=n-1;
                while(l<r){

                    if(target == (long long)sum1+sum2+nums[l]+nums[r]){
                        v.push_back({sum1,sum2,nums[l],nums[r]});
                        l++;r--;
                        while(l<r && nums[l]==nums[l-1]){
                            l++;
                        }
                        while(r>l && nums[r]==nums[r+1]){
                            r--;
                        }
                    }else if(target > (long long)sum1+sum2+nums[l]+nums[r]){
                        l++;
                    }else{
                        r--;
                    }

                }
            }

        }
        return v;
    }
};