class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0,n=nums.size();
        // while(i<nums.size()){
        //     if(nums[i]!=0 ){
        //         swap(nums[i],nums[j]);
        //         j++;
        //     }
        //     i++;

        // }
        int ind=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[ind++]);
            }
        }
    }
};