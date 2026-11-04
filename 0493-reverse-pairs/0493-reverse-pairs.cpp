class Solution {
public:
    void merge(vector<int>& nums,int l,int r){
        vector<int> temp;

        int mid = l+(r-l)/2;
        int i=l,j=mid+1;
        while(i<=mid && j<=r){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=r){
            temp.push_back(nums[j++]);

        }
        for(int k=0;k<temp.size();k++){
            nums[l+k]=temp[k];
        }
    }
    int cntPairs(vector<int>& nums,int l,int r,int mid){
        int right=mid+1;
        int cnt=0;
        for(int i=l;i<=mid;i++){
            while(right<=r && (long long)nums[i] > 2LL*nums[right] ){
                right++;
            }
            cnt+=(right-(mid+1));
        }
        return cnt;
    }

    int mergeSort(vector<int>& nums,int i,int j){
        int cnt=0;
        if(i>=j) return cnt;
        int mid = i+(j-i)/2;
        cnt+=mergeSort(nums,i,mid);
        cnt+=mergeSort(nums,mid+1,j);
        cnt+=cntPairs(nums,i,j,mid);
        merge(nums,i,j);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(nums,0,n-1);
    }
};