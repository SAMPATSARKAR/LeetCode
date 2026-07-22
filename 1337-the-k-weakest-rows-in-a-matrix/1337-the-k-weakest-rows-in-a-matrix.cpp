class Solution {
public:

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        for(auto x:mat){
            int count=0;
            for(auto y:x){
                if(y==1){
                    count++;
                }
            }
            v.push_back(count);
        }
        for(int i=0;i<v.size();i++){
            pq.push({v[i],i});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};