class Solution {
public:
    bool checkString(string s) {
        int n= s.size();
        int i=0,j=0;
        while(j<n){
            if(s[j]=='b'){
                i=j;
                while(i<n){
                    if(s[i]=='a') return false;
                    i++;
                }
                return true;
            }
            j++;
        }
        return true;
    }
};