class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        stack<pair<int,int>> st;
        vector<int> ngl;
        vector<int> ngr;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                ngl.push_back({st.top().second});
            }else{
                ngl.push_back({-1});

            }
            st.push({heights[i],i});
        }

        while(!st.empty()){
            st.pop();
        }

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                ngr.push_back({st.top().second});
            }else{
                ngr.push_back({n});

            }
            st.push({heights[i],i});
        }
        reverse(ngr.begin(),ngr.end());

        int aa=0;
        int ans=0;
        for(int i=0;i<n;i++){
            aa=(ngr[i]-ngl[i]-1)*heights[i];
            ans=max(aa,ans);

        }
        return ans;

    }   
};