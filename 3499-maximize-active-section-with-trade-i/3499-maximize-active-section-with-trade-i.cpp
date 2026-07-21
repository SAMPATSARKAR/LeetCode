class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int activeCount=count(begin(s),end(s),'1');

        vector<int> inactiveCount;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                int start = i;
                while(i<n && s[i]=='0') i++;
                inactiveCount.push_back(i-start);
            }else{
                i++;
            }
        }
        int mx=0;
        for(int i=1;i<inactiveCount.size();i++){
            mx=max(mx,inactiveCount[i]+inactiveCount[i-1]);
        }
        return mx+activeCount;
    }
};