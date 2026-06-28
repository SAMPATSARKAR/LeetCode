class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        vector<int> ans(2,-1);
        //lower bound
        while(i<=j){
            int mid = i+(j-i)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                j=mid-1;
            }else if(nums[mid]<target){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        //upper bound bound
        int i1=0;
        int j1=nums.size()-1;
        while(i1<=j1){
            int mid = i1+(j1-i1)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                i1=mid+1;
            }else if(nums[mid]>target){
                j1=mid-1;
            }else{
                i1=mid+1;
            }
        }
        return ans;

    }
};