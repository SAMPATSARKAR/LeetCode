class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi=0;
        // for(int i=0;i<n;i++){
        //     int zero=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0){
        //             zero++;
        //         }
        //         if(zero<=k){
        //             maxi=max(maxi,j-i+1);
        //         }else{
        //             break;
        //         }
        //     }
        // }
        // return maxi;
        int i=0,j=0;
        int zero=0;
        while(j<n){
            if(nums[j]==0){
                zero++;
            }
            while(zero>k){
                if(nums[i]==0){
                    zero--;
                }
                i++;
            }
            if(zero<=k){
                maxi=max(maxi,j-i+1);
            }
            j++;
        }
        return maxi;
    }
};