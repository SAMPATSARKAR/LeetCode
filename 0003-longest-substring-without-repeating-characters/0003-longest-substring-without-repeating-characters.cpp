class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            int arr[256]={0};
            for(int j=i;j<n;j++){
                if(arr[s[j]]>=1) break;
                if(arr[s[j]]!=1){
                    maxi=max(maxi,j-i+1);

                }
                arr[s[j]]++;
            }

        }
        return maxi;


    }
};