class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int prevSum = 100000;
        sort(nums.begin(),nums.end());
        for(int k=0;k<n;k++){
            int sum = nums[k];
            int i = k+1;
            int j = n-1;

            while(i<j){
                int sum1 = nums[i]+nums[j];
                int total = sum1+sum;
                if(abs(total-target)<abs(prevSum-target)){
                    prevSum = total;
                }
                if(total<target){
                    i++;
                }else{
                    j--;
                }

            }
        }
        return prevSum;
    }
};