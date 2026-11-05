class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int ans=0;
        for(auto x:st){
            if(st.find(x-1) == st.end()){
                int length=1;
                while((st.find(length+x)!=st.end()))
                    length+=1;
                ans=max(ans,length);
            }
        }
        return ans;
    }
};