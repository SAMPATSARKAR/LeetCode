class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevCount=0;
        int ans = 0;
        for(auto row:bank){
            int count1=0;
            for(auto x:row){
                if(x=='1'){
                    count1++;

                }
            }
            if(count1==0){
                continue;
            }
            ans+=count1*prevCount;
            prevCount=count1;

        }
        return ans;
    }
};