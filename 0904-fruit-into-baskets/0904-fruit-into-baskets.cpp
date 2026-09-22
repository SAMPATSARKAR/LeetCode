class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mpp;
        int count=0;
        int i=0,j=0;
        int n=fruits.size();
        int ans=0;

        while(j<n){
            if(mpp[fruits[j]]==0){
                count++;
            }
            mpp[fruits[j]]++;
            // if(count==2){
            // }
            while(count>2){
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0){
                    count--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};