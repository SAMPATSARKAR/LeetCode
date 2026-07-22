class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        priority_queue<pair<int,int>> pq;
        int max=INT_MIN;
        for(auto x:mpp){
            pq.push({x.second,x.first});
        }
        vector<int> v;
        while(k--){
            int f = pq.top().second;
            v.push_back(f);
            pq.pop();
            
        }
        return v;
    }
};