class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        // vector<int> v(26,0);
        // int n = s.size();
        // for(int i=0;i<n;i++){
        //     v[s[i]-'a']++;
        // }
        // int mn=INT_MAX;
        // int j=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]==t[j]){
        //         int count=v[s[i]-'a'];
        //         mn=min(mn,count);
        //         j++;
        //     }
        // }
        // return mn;
        unordered_map<char,int> have;
        for(auto x:s){
            have[x]++;
        }

        unordered_map<char,int> need;
        for(auto x:t){
            need[x]++;
        }

        int res=INT_MAX;
        for(auto x: need){
            char a = x.first;
            int fneed = x.second;
            int fhave = have[a];
            int times = fhave/fneed;
            res=min(times,res);
        }
        return res;

    }
};