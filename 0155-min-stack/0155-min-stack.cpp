class MinStack {
public:
    stack<int> st;
    stack<int> ss;
    MinStack() {

    }
    
    void push(int value) {
        st.push(value);
        if(ss.empty() || ss.top()>=value){
            ss.push(value);
        }
    }
    
    void pop() {
        if(st.empty()){

            return;
        }
        int a = st.top();
        st.pop();
        if(ss.top()==a){
            ss.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        if(ss.empty()) return -1;
        return ss.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */