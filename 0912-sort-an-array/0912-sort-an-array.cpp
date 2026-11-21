class Solution {
public:
    void quickSort(vector<int>& nums,int l,int r){
        if(l>=r) return;
        int pi=l+rand()%(r-l+1);
        int p = nums[pi];
        int lt=l,mid=l,ht=r;
        while(mid<=ht){
            if(nums[mid]<p){
                swap(nums[mid],nums[lt]);
                lt++;
                mid++;
            }else if(nums[mid]>p){
                swap(nums[mid],nums[ht]);
                ht--;
            }else{
                mid++;
            }
        }
        quickSort(nums,l,lt-1);
        quickSort(nums,ht+1,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        srand(time(0));
        int n = nums.size();
        int i=0,j=n-1;
        quickSort(nums,i,j);
        return nums;
    }
};