class Solution {
public:
    int minLength(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
                if(!st.empty() && st.top() == 'A' && s[i]=='B'){
                    st.pop();continue;
                }else if(!st.empty() && st.top() == 'C' && s[i]=='D'){
                    st.pop();continue;
                }
            st.push(s[i]);
        }
        return st.size();
        }

    };