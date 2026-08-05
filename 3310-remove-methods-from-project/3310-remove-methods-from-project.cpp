class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        vector<int> inDegree(n,0);
        vector<bool> susp(n,false);
        //will make an adj list
        for(auto &x:invocations){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
            inDegree[v]++;
        }
        //BFS- will use it to find all the susp nodes
        queue<int> q;
        q.push(k);
        susp[k]=true;
        while(!q.empty()){
            int a = q.front();
            q.pop();
            for(auto x: adj[a]){
                inDegree[x]--;
                if(!susp[x]){
                    q.push(x);
                    susp[x]=true;
                }
            }
        }
        vector<int> res;
        int cannotRemove=false;
        for(int i=0;i<n;i++){
            if(susp[i] && inDegree[i]>0){
                cannotRemove=true;
                break;
            }


            if(!susp[i]){
                res.push_back(i);
            }
        }
        if(cannotRemove){
            vector<int> res1;
            for(int i=0;i<n;i++){
                res1.push_back(i);
            }
            return res1;
        }
        return res;







    }
};