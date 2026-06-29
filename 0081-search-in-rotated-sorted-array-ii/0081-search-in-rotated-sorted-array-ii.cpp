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

    bool binarySearch(vector<int> nums,int i1,int j1,int target){
        int l=i1;
        int r=j1;
        int mid;
        while (l <= r) {
    int mid = l + (r - l) / 2;

    if (nums[mid] == target)
        return true;

    if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
        l++;
        r--;
    }
    else if (nums[l] <= nums[mid]) {   // left half sorted
        if (nums[l] <= target && target < nums[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    else {                             // right half sorted
        if (nums[mid] < target && target <= nums[r])
            l = mid + 1;
        else
            r = mid - 1;
    }
}
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int p = pivot(nums,n);
        if(target>=nums[p] && target<=nums[n-1]){
            return binarySearch(nums,p,n-1,target);
        }else{
            return binarySearch(nums,0,p-1,target);
        } 
    }
};