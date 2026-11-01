class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adjList(n+1);
        for(auto x:times){
            int u = x[0];
            int v = x[1];
            int w = x[2];
            adjList[u].push_back({v,w});
        }
        vector<int> dist(n+1,1e9+7);
        dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});
        while(!pq.empty()){
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if(d>dist[node]) continue;
            for(auto x: adjList[node]){
                int nodee = x.first;
                int wt = x.second;
                if(wt+d<dist[nodee]){
                    dist[nodee]=wt+d;
                    pq.push({dist[nodee],nodee});
                }
            }
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
            if(dist[i]==1e9+7){
                return -1;
            }
            ans=max(ans,dist[i]);
        }
        return ans;
        
    }
};