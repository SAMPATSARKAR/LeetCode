class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[n-k];
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto x:nums){
            pq.push(x);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};