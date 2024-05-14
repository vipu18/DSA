#include <bits/stdc++.h>
class MinStack {
    stack<long long>st;
    long long mini;
public:
    MinStack() {
        while(st.empty() == false) st.pop();
        mini = INT_MAX;
    }
    
    void push(int val) {
        long long value = val;
        if(st.empty()){
            st.push(value);
            mini = value;
        }
        else{
            if(value<mini){
                st.push(2*value*1LL-mini);
                mini = value;
            }
            else st.push(value);
        }
    }
    
    void pop() {
        long long top = st.top();
        st.pop();
        if(top<mini){
            mini = 2*mini-top;
        }
    }
    
    int top() {
        if(st.empty())return -1;
        long long top = st.top();
        if(top<mini)return mini;
        else return top;
    }
    
    int getMin() {
        return mini;
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