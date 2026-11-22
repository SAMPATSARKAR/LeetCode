class Solution {
public:
    bool checkString(string s) {
        int n= s.size();
        int i=0,j=0;
        // while(i<j){
        //     if(s[i]=='b'&& s[j]=='a')return false;
        //     i++;j--;
        // }
        // return true;
        while(j<n){
            if(s[j]=='b'){
                i=j;
                while(i<n){
                    if(s[i]=='a') return false;
                    i++;
                }
            }
            j++;
        }
        return true;

    }
};