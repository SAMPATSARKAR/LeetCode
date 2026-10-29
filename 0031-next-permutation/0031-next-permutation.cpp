class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int gola_idx=-1;
        int n = nums.size();
        for(int j=n-1;j>0;j--){
            if(nums[j]>nums[j-1]){
                gola_idx = j-1;
                break;
            }
        }
        int swap_idx=gola_idx;
        if(gola_idx!=-1){

            for(int i=n-1;i>=gola_idx+1;i--){

                if(nums[gola_idx]<nums[i]){
                    swap_idx=i;
                    break;
                }
            }
            swap(nums[swap_idx],nums[gola_idx]);
        }
        reverse(nums.begin()+gola_idx+1,nums.end());


    }
};