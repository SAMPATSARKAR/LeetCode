class Solution {
public:
    int minimumPushes(string word) {
            vector<int> v(26,0);
            int n = word.size();
            for(int i=0;i<n;i++){
                    v[word[i]-'a']++;
            }
            sort(v.rbegin(),v.rend());
            int press=0;
            int ans=0;
            for(int i=0;i<26;i++){
                int freq = v[i];
                press=(i/8)+1;
                ans+=freq*press;
            }
            return ans;

        }
};