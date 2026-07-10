class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int i=0,j=0;
        // while(j<n){
        //     if(nums[i]==nums[j]){
        //         return true;
        //     }else{

        //     }
        // }
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i])!=mpp.end()){
                if(i-mpp[nums[i]]<=k){
                    return true;
                }
            }
            mpp[nums[i]]=i;
        }
        return false;

    }
};