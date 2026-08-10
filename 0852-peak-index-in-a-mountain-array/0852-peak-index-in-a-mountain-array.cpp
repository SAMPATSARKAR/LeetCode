class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0,j=arr.size()-1,ans=0;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(arr[mid]>arr[mid+1]){
                ans=mid;
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return ans;
    }
};