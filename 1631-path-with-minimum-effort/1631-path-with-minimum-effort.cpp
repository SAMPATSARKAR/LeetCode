class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;

        int n =heights.size();
        int m =heights[0].size();
        vector<vector<int>> dist(n,vector<int>(m,INT_MAX));
        dist[0][0]={0};
        pq.push({0,{0,0}});

        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};

        while(!pq.empty()){
            int diff = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            pq.pop();
            if(r == n-1 && c== m-1) return diff;
            for(int i=0;i<4;i++){
                int newr = r+dr[i];
                int newc = c+dc[i];

                if(newr >=0 && newr<n && newc>=0 && newc<m){
                    int newdiff = max(abs(heights[r][c]-heights[newr][newc]),diff);
                    if(newdiff<dist[newr][newc]){
                        dist[newr][newc]=newdiff;
                        pq.push({newdiff,{newr,newc}});
                    }
                }

            }
        }
        return 0;

    }
};