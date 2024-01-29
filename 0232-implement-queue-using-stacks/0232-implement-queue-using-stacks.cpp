class MyQueue {
public:
    stack<int>st;
    stack<int>ts;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    void reverse(){
        while(!st.empty())
        {
            ts.push(st.top());
            st.pop();
        }
    }
    
    int pop() {
        if(ts.empty())
            reverse();
        int i = ts.top();
        ts.pop();
        return i;
    }
    
    int peek() {
        if(ts.empty())
            reverse();
        return ts.top();
    }
    
    bool empty() {
        return st.empty() && ts.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */