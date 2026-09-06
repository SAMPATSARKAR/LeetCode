class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int max_diff = 100000;
        sort(nums.begin(),nums.end());
        for(int k=0;k<n;k++){
            int sum = nums[k];
            int i = k+1;
            int j = n-1;

            while(i<j){
                int sum1 = nums[i]+nums[j];
                int total = sum1+sum;
                if(abs(total-target)<abs(max_diff-target)){
                    max_diff = total;
                }
                if(total<target){
                    i++;
                }else{
                    j--;
                }

            }
        }
        return max_diff;
    }
};