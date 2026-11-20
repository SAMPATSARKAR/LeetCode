class Solution {
public:
    int n;
    pair<int,int> getCoord(int num){
        int rt = (num-1)/n;
        int rb = (n-1) - rt;

        int c = (num-1)%n;
        if((rb%2==1 && n%2==1) || (rb%2==0 && n%2==0)){
            c = n-1-c;
        }
        return make_pair(rb,c);

    } 

    int snakesAndLadders(vector<vector<int>>& board) {
        int steps=0;
        n=board.size();
        vector<vector<bool>> vis(n,vector<bool> (n,false));
        queue<int> q;
        q.push(1);
        vis[n-1][0]=true;
        while(!q.empty()){
            int n1 = q.size();
            while(n1--){
                int x = q.front();
                q.pop();
                if(x == n*n){
                    return steps;
                }
                for(int i=1;i<=6;i++){
                    int val = i+x;
                    if(val>n*n) break;
                    pair<int,int> a = getCoord(val);
                    int r = a.first;
                    int c = a.second;
                    if(vis[r][c]) continue;

                    vis[r][c]=true;

                    if(board[r][c]==-1){
                        q.push(val);
                    }else{
                        q.push(board[r][c]);

                    }
                    
                }
            }
            steps++;
        }
        return -1;

    }
};