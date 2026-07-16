class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = s.size();
        int n2 =g.size();
        int i=0,j=0;
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<n && j<n2){
            if(s[i]>=g[j]){
                count++;i++;j++;
            }else{
                i++;
            }
            
        }
        return count;
    }
};