#define ll long long
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int sum1 = nums[i];
            if(i>0 && i<n && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n;j++){

                int sum2= nums[j];
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    int sum3 = nums[l]+nums[r];
                    if((ll)sum3+sum2+sum1==target){
                        v.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;r--;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                        
                    }else if((ll)sum3+(sum2+sum1)>target){
                        r--;
                    }else{
                        l++;
                    }

                }


                
            }
        }
        return v;
    }
};