class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(auto x: nums){
            if(a.find(x) != a.end()){
                return true;
            }
            a.insert(x);
        }
        return false;
    }
};