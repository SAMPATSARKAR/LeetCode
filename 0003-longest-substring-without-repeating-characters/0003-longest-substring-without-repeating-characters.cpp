class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        vector<int> mpp(256,-1);
        int n = s.size();
        int maxi=0;
        while(j<n){
            if(mpp[s[j]]!=-1){
                if(mpp[s[j]]>=i){
                    i=mpp[s[j]]+1;
                }
            }
            maxi=max(maxi,j-i+1);
            mpp[s[j]]=j;
            j++;
        }
        return maxi;
    }
};