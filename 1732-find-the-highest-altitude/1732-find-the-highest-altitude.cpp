class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> v(n+1,0);
        for(int i=1;i<n+1;i++){
            v[i]=v[i-1]+gain[i-1];
        }
        for(int i=0;i<n+1;i++){
            cout<<v[i]<<" ";

        }
        int max=INT_MIN;
        for(int i=0;i<n+1;i++){
            if(v[i]>max){
                max=v[i];
            }
        }
        return max;
    }
};