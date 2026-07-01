class Solution {
public:
    int maxScore(string s) {
        int countOne=0;
        int countZero=0;
        int maxi=0;
        int n = s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                countOne++;
            }
        }
        for(int i=0;i<n-1;i++){

            if(s[i]=='0'){
                countZero++;
            }else{
                countOne--;
            }
            maxi = max(maxi,countZero+countOne);

        }
        return maxi;
    }
};