class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            // int diff=0;
            if(nums[i]>=nums[i+1]){
                int diff = abs(nums[i]-nums[i+1]);
                cout<<diff+1<<" ";
                sum+=(diff+1);
                nums[i+1]+=diff+1;
            }
        }
        return sum;
    }
};