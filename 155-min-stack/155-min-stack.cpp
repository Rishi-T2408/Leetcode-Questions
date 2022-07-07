class MinStack {
public:
    long mn;
    stack<long> st;
    MinStack() {
        mn=INT_MAX;
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            mn=val;
        }
        else{
            if(val<mn)
            {
                st.push((2*long(val)-mn));
                mn=val;
            }
            else{
                st.push(val);
            }
        }
    }
    
    void pop() {
        if(!st.empty())
        {
            if(st.top()<mn)
            {
                mn=2*mn-st.top();
            }
            
            st.pop();
        }
    }
    
    int top() {
        if(!st.empty())
        {
            if(st.top()>mn)
            {
                return st.top();
            }
            else{
                return mn;
            }     
        }
        return -1;
    }
    
    int getMin() {
        if(!st.empty())
        {
            return mn;
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */