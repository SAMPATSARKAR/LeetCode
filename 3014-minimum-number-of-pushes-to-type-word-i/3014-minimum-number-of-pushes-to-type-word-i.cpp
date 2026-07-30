class Solution {
public:
    int minimumPushes(string word) {
        int res=0;
        unordered_map<int,int> mp;
        int assign_key=2;

        for(int i=0;i<word.size();i++){
            if(assign_key>9){
                assign_key=2;
            }
            mp[assign_key]++;
            res+=mp[assign_key];
            assign_key++;
        }
        return res;
    }
};