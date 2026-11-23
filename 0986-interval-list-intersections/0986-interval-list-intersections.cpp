class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int i=0,j=0;
        int n = firstList.size();
        int m = secondList.size();
        vector<int> v;
        while(i<n && j<m){
           
            int f = max(firstList[i][0],secondList[j][0]);
            int s = min(firstList[i][1],secondList[j][1]);
            if(f<=s){

            ans.push_back({f,s});
            }
            

            if(firstList[i][1]<secondList[j][1]){
                i++;
            }else{
                j++;
            }

        }
        return ans;
    }
};