class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> vp;
        for(auto x:mpp){
            int n = x.first;
            int f = x.second;
            vp.push_back({f,n});
        }
        sort(vp.begin(),vp.end(),[&] (auto &a, auto &b){
            if(a.first==b.first) return a.second>b.second;//value
            return a.first<b.first;//freq
        });
        vector<int> ans;
        for(int i=0;i<vp.size();i++){
            int x = vp[i].first;
            for(int j=0;j<x;j++){
                ans.push_back(vp[i].second);
            }
        }
        return ans;
    }
};