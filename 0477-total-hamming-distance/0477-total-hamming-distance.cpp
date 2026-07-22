class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {

        int n = nums.size();
        vector<int> v(32,0);
        for(int j=0;j<n;j++){
            int x=nums[j];
            for(int i=0;i<32;i++){
                if((x>>i) & 1) v[i]++;
                
            }
        }

        int ans=0;
        for(int i=0;i<32;i++){
            ans+=v[i]*(n-v[i]);
        }

        return ans;

    }
};