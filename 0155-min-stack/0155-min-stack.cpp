class MinStack {
public:
    stack<long long> st;
    MinStack() {}
    long long minval;
    void push(int value) {
        if (st.empty()) {
            st.push(value);
            minval = value;
        } else if (value > minval) {
            st.push(value);
        } else {
            st.push(2LL* value - minval);
            minval = value;
        }
    }

    void pop() {
        if (st.top() < minval)
            minval = 2LL* minval - st.top();//encoded = 2 * value - mini

        st.pop();
    }

    int top() {
        if (st.top() < minval)
            return minval;

        else
            return st.top();
    }

    int getMin() { return minval; }
};

/*-------------------------
class MinStack {
public:
    stack<pair<int, int>> st; // val,minval
    MinStack() {}

    void push(int value) {
        if(st.empty())
        {
            st.push({value,value});
        }
        else{
            int minval=min(value,st.top().second);
            st.push({value,minval});
        }
    }

    void pop() { return st.pop(); }

    int top() { return st.top().first; }

    int getMin() { return st.top().second; }
};
--------------------------------------
class MinStack {
public:

    stack<int> st;
    stack<int> mini;
    MinStack() {}

    void push(int value) {
        st.push(value);
        if (mini.empty() || value <= mini.top()) {
            mini.push(value);
        }
    }

    void pop() {
         if (st.top() == mini.top())
            mini.pop();

        st.pop(); }

    int top() { return st.top(); }

    int getMin() { return mini.top(); }
};
*/
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */