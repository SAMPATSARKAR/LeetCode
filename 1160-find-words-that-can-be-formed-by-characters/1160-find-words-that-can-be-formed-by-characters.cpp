class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mpp;
        for(auto x:chars){
            mpp[x-'a']++;
        }
        int countt=0;
        for(auto x:words){
            bool possible=true;
            auto temp = mpp;
            for(auto y:x){
                if(temp[y-'a']==0){
                    possible=false;
                    break;
                }
                temp[y-'a']--;
            }
            if(possible){
                countt+=x.size();
            }
        }
        return countt;
    }
};