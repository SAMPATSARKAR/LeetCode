class Solution {
public:
    int maxArea(vector<int>& nums) {
        // int j=nums.size()-2,ans=0,n=nums.size();
        // while(j>=0){
        //     if(nums[j]<=nums[n-1]){
        //         int a=nums[j]*(n-1);
        //         ans=max(ans,a);
        //     }
        //     j--;
        // }
        // return ans;
        int i=0 , j=nums.size()-1;
        int area=0;
        while(i<j){
            int ans = min(nums[i],nums[j]) * (j-i);
            area = max(ans,area);
            if(nums[i]<nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};