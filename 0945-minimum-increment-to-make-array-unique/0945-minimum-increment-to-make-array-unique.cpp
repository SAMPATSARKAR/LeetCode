class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                int diff = abs(nums[i]-nums[i+1]);
                sum+=diff+1;
                nums[i+1]+=diff+1;
            }
        }
        return sum;
    }
};