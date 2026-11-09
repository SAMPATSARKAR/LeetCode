class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int n = s.size();
        int l=0,r=0;
        int arr[26]={0};
        int maxi=0;
        while(r<n){
            arr[s[r]-'A']++;
            maxi=max(maxi,arr[s[r]-'A']);
            if((r-l+1)-maxi>k){
                arr[s[l]-'A']--;
                l++;
            }
            if((r-l+1)-maxi<=k){
                maxlen=max(maxlen,(r-l+1));
            }
            r++;
        }
        return maxlen;
        // for(int i=0;i<n;i++){
        //     int arr[26]={0} ,maxfreq=0;
        //     for(int j=i;j<n;j++){
        //         arr[s[j]-'A']++;
        //         maxfreq=max(maxfreq,arr[s[j]-'A']);
        //         int change = (j-i+1)-maxfreq;
        //         if(change<=k){
        //             maxlen=max(maxlen,(j-i+1));

        //         }else{
        //             break;
        //         }
        //     }
        // }
        // return maxlen;
    }
};