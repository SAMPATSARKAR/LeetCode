class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int count=0;
        bool ans=false;
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                count++;
            }
        }
        if(count==0 ){
            ans= true;
        }else if(count==1){
            if(word[0]>='A' && word[0]<='Z'){
                ans= true;
            }
        }else if(count==n){
            ans= true;
        }
        return ans;
    }
};