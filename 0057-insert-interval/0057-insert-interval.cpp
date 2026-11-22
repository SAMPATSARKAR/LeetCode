class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newintervals) {
        int n = intervals.size();
        int i=0;
        vector<vector<int>> ans;
        while(i<n && intervals[i][1] < newintervals[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        //update interval
        while(i<n && intervals[i][0]<=newintervals[1]){
            newintervals[0]=min(intervals[i][0],newintervals[0]);
            newintervals[1]=max(intervals[i][1],newintervals[1]);
            i++;
        }
        ans.push_back(newintervals);
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;

    }
};