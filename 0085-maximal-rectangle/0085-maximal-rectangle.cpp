class Solution {
public:
    int mah(vector<int> v){
        //nsl
        int n=v.size();
        stack<pair<int,int>> st;
        vector<int> nsl;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first>=v[i]){
                st.pop();
            }
            if(!st.empty()){
                nsl.push_back(st.top().second);
            }else{
                nsl.push_back(-1);

            }
            st.push({v[i],i});
        }
        while(!st.empty()){
            st.pop();
        }
        //nsr
        vector<int> nsr;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first>=v[i]){
                st.pop();
            }
            if(!st.empty()){
                nsr.push_back(st.top().second);
            }else{
                nsr.push_back(n);

            }
            st.push({v[i],i});
        }
        reverse(nsr.begin(),nsr.end());
        vector<int> ans;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,(nsr[i]-nsl[i]-1)*v[i]);
        }
        return maxi;

    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v;
        int maxi=INT_MIN;
        for(int i=0;i<m;i++){
            v.push_back(matrix[0][i]-'0');
        }
        maxi=max(maxi,mah(v));
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0'){
                    v[j]=0;
                }else{
                    v[j]++;

                }
            }
            maxi=max(maxi,mah(v));
        }
        return maxi;

    }
};