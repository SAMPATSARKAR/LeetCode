class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int mid;
        int ans;
        bool found=false;
        while(i<=j){
            mid=i+(j-i)/2;
            if(nums[mid]>=target){
                ans=mid;
                j=mid-1;
                found=true;
            }else{
                i=mid+1;
            }
        }
        
        return (!found)?i:ans;
    }
};