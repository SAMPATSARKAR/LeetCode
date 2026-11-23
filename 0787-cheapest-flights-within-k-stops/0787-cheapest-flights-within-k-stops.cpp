class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<pair<int,int>> adj[n];
        for(int i=0;i<flights.size();i++){
            int s = flights[i][0];
            int d = flights[i][1];
            int p = flights[i][2];
            adj[s].push_back({d,p});
        }


        priority_queue
        <
        pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>
        
        > q;

        vector<int> dist(n,1e9);
        q.push({0,{src,0}});
        //stops,node,price

        while(!q.empty()){
            int stops = q.top().first;
            int node = q.top().second.first;
            int price = q.top().second.second;
            q.pop();

            if(stops>k) continue;

            for(auto it : adj[node]){
                auto adjNode = it.first; 
                auto adjPrice = it.second;


                if(price+adjPrice< dist[adjNode] && stops<=k){
                    dist[adjNode]=price+adjPrice;
                    q.push({stops+1,{adjNode,dist[adjNode]}});
                }
            }



        }
        if(dist[dst]==1e9) return -1;
        return dist[dst];


    }
};