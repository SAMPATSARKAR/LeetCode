class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxi=0;
        int i=0,j=0;
        unordered_map<int,int> mpp;
        while(j<n){
            mpp[fruits[j]]++;
            while(mpp.size()>2){
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0){
                    mpp.erase(fruits[i]);
                }
                i++;
            }
            if(mpp.size()<=2){
                maxi=max(maxi,j-i+1);
            }
            j++;
        }        
        return maxi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // set<int> st;
        // while(j<n){
        //     st.insert(fruits[j]);
        //     if(st.size()<=2){
        //         maxi=max(maxi,j-i+1);
        //     }
        //     while(st.size()>2){

        //     }
        //     j++;
        // }

















        // for(int i=0;i<n;i++){
        //     set<int> st;
        //     for(int j=i;j<n;j++){
        //         st.insert(fruits[j]);
        //         if(st.size()<=2){
        //             maxi = max(maxi,j-i+1);
        //         }else{
        //             break;
        //         }
        //     }
        // }
        // return maxi;
    }
};