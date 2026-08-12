class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0,j=nums.size()-1,n=nums.size(),mn=0;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(nums[mid]>nums[n-1]){
                i=mid+1;
            }else{
                mn=nums[mid];
                j=mid-1;
            }

        }
        return mn;
    }
};