class Solution {
public:
    bool winnerOfGame(string c) {
        int count1=0,count2=0;
        for(int i=1;i<c.size()-1;i++){
            if(c[i-1]=='A'&& c[i]=='A'&&c[i+1]=='A'){
                count1++;
            }
            if(c[i-1]=='B'&& c[i]=='B'&&c[i+1]=='B'){
                count2++;
            }
            
        }
        if(count1>count2){
            return true;
        }
        return false;
    }
};