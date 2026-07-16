class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        sort(p.begin(),p.end());
        int count=0;
        int i=0,j=p.size()-1;
        while(i<=j){
            if(p[i]+p[j]<=l){
                count++;
            }else if(p[i]+p[j]>l){
                count++;j--;continue;
            }else{
                count++;i++;continue;
            }
            i++;
            j--;
        }
        return count;
    }
};