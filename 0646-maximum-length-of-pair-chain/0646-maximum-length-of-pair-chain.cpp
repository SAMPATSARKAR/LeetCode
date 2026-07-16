class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),[] (vector<int> &a, vector<int> &b){
            return a[1]<b[1];
        });
        int endTime=INT_MIN,count=0;
        for(auto x:p){
            if(x[0]>endTime){
                count++;
                endTime=x[1];
            }
        }
        return count;

    }
};