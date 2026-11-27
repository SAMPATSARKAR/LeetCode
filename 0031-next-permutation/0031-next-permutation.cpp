class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gola_idx = -1;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                gola_idx = i-1;
                break;
            }
        }
        int swap_idx = gola_idx;
        if(gola_idx!=-1){

            for(int j=n-1;j>=gola_idx+1;j--){
                if(nums[j]>nums[gola_idx]){
                    swap(nums[j],nums[gola_idx]);break;
                }
            }
        }
        reverse(nums.begin()+gola_idx+1,nums.end());
        
    }
};