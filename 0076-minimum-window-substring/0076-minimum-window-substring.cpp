class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0;
        int minLen=1e9+7,startIdx=-1;
        map<char,int> mpp;
        int m = t.size();
        int n = s.size();
        for(int i=0;i<m;i++){
            mpp[t[i]]++;
        }
        int cnt=0;
        while(r<n){
            if(mpp[s[r]]>0) cnt++;
            mpp[s[r]]--;

                while(cnt==m){
                    if((r-l+1)<minLen){
                        minLen=r-l+1;
                        startIdx=l;
                    }
                    mpp[s[l]]++;
                    if(mpp[s[l]]>0){
                        cnt--;
                    }
                    l++;
                }
            r++;
        }
        return startIdx==-1?"":s.substr(startIdx,minLen);
    }
};