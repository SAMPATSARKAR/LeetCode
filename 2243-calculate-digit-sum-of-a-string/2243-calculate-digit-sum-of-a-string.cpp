class Solution {
public:
    string digitSum(string s, int k) {
        string ans="";
        while(s.size()>k){
        int sum=0;
        int cnt=0;
            for(int i=0;i<s.size();i++){
                
                sum+=(s[i]-'0');
                cnt++;
                if(cnt==k || i+1==s.size()){
                    ans+=to_string(sum);
                    cnt=0;
                    sum=0;
                }

            }
            s=ans;
            ans="";
        }
        return s;
    }
};