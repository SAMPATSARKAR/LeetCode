class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int idx=0;idx<32;idx++){
            int count=0;
            for(int i=0;i<n;i++){
                if(nums[i] & (1<<idx)){
                    count++;
                }
            }
            if(count%3==1){
                ans|=1<<idx;
            }
        }
        return ans;
    }
};