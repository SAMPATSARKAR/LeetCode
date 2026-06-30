class Solution {
public:
    bool vowels(char ch){
        ch=tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        int n = s.size();
        string v;
        for(int i=0;i<n;i++){
            if(vowels(s[i])){
                v.push_back(s[i]);
            }
        }
        int j=0;
        sort(v.begin(),v.end());
        for(auto &ch:s){
            if(vowels(ch)){
                ch=v[j];
                j++;
            }
        }
        return s;
    }
};