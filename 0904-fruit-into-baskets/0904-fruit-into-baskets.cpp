class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int r=0,l=0;
        int n = fruits.size();
        unordered_map<int,int> mpp;
        int cnt=0;
        int ans=0;
        while(r<n){
            if(mpp[fruits[r]]==0){
                cnt++;
            }
            mpp[fruits[r]]++;
            if(cnt<=2){
                ans=max(ans,r-l+1);
            }
            while(cnt>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0) cnt--;
                l++;
            }
            r++;
        }
        return ans;
    }
};