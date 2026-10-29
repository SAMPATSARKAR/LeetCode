class Solution {
public:
unordered_set<int> st;
void per(vector<int> num,vector<int> nums,vector<vector<int>> &v,int n){
    if(st.size() == n){
        v.push_back(num);
        return;
    }
    for(int i=0;i<n;i++){
        if(st.find(nums[i])==st.end()){
            st.insert(nums[i]);
            num.push_back(nums[i]);
            per(num,nums,v,n);
            num.pop_back();
            st.erase(nums[i]);
        }


    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> num;
        vector<vector<int>> v;
        int n = nums.size();
        per(num,nums,v,n);
        return v;
    }
};