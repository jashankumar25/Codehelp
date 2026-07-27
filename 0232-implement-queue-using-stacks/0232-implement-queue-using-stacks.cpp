class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {}

    void push(int x) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s2.push(x);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int val = s1.top();

        s1.pop();
        return val;
    }

    int peek() { return s1.top(); }

    bool empty() { return s1.empty(); }
};
/*  "The key optimization is lazy transfer: move elements from the input stack to the output stack only 
    when the output stack becomes empty. This ensures each element is transferred at most once, 
    giving amortized O(1) performance for queue operations."
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
