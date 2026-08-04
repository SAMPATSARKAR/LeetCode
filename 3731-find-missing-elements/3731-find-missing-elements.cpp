class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]!=1){
                int x = nums[i+1]-nums[i];
                int y = nums[i];
                for(int i=1;i<x;i++){
                    v.push_back(y+i);
                }
            }
        }
        return v;

    }
};