class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry = 0;
        string ans="";
        while(i>=0 || j>=0 || carry){
            int seta=0;
            int setb=0;
            if(i>=0){
                seta = a[i]-'0';
            }
            if(j>=0){
                setb = b[j]-'0';
            }

            int sum = seta+setb+carry;
            ans+=(sum%2)+'0';
            carry = sum/2;
            i--;j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};