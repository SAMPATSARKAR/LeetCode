class Solution {
public:
    int pivot(vector<int> nums,int n){
        int i=0;
        int j=n-1;
        while(i<j){
            int mid = i+(j-i)/2;
                if(nums[mid]>=nums[0]){
                    i=mid+1;
                }else{
                    j=mid;
                }

        }
        return i;
    }

    int binarySearch(vector<int> nums,int i1,int j1,int target){
    int i=i1;
    int j=j1;
    int mid;
        while(i<=j){
            mid = i+(j-i)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int p = pivot(nums,n);
        if(target>=nums[p] && target<=nums[n-1]){
            return binarySearch(nums,p,n-1,target);
        }else{
            return binarySearch(nums,0,p-1,target);

        } 
    }
};