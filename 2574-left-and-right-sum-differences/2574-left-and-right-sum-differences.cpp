class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n =nums.size();
        vector<int> pre(n+1,0);
        vector<int> suf(n+1,0);
        vector<int> ans(n);
        for(int i=1;i<n+1;i++){
            pre[i]=pre[i-1]+nums[i-1];
        }
        for(int i=n-1;i>=0;i--){
            // pre[i]=pre[i-1]+nums[i-1];
            suf[i]=suf[i+1]+nums[i];
        }
        for(int i=0;i<n;i++){
            // cout<<suf[i]<<" "<<pre[i]<<" ";
            // cout<<endl;
            ans[i]=abs(pre[i]-suf[i+1]);
        }
        return ans;
    }
};