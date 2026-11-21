class Solution {
public:
    int piv(vector<int> nums){
        int n =nums.size();
        int l=0,r=n-1;
        while(l<r && nums[l]==nums[l+1]) l++;
        while(l<r && nums[r]==nums[r-1]) r--;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return r;
    }

    bool binarySearch(vector<int> nums,int l,int r,int target){
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = piv(nums);
        if(binarySearch(nums,0,pivot-1,target)){
            return true;
        }else if(binarySearch(nums,pivot,n-1,target)){
            return true;
        }
        return false;
    }
};