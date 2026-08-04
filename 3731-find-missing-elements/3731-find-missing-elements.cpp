class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        //brute force
                    // int n=nums.size();
                    // sort(nums.begin(),nums.end());
                    // vector<int> v;
                    // for(int i=0;i<n-1;i++){
                    //     if(nums[i+1]-nums[i]!=1){
                    //         int x = nums[i+1]-nums[i];
                    //         int y = nums[i];
                    //         for(int i=1;i<x;i++){
                    //             v.push_back(y+i);
                    //         }
                    //     }
                    // }
                    // return v;
        // optimize
        vector<int> v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int s = nums[0];
        int e = nums[n-1];
        set<int> st(nums.begin(),nums.end());
        for(int i=s+1;i<=e-1;i++){
            if(st.count(i)==0) v.push_back(i);
        }
        return v;

    }
};