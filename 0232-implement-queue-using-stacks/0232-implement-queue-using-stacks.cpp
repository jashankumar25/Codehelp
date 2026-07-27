class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    int peeked = -1;
    MyQueue() {}

    void push(int x) {
        if (input.empty()) {
            peeked = x;
        }
        input.push(x);
    }

    int pop() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        int x = output.top();
        output.pop();
        return x;
    }
    int peek() {
        while (!output.empty()) {
            return output.top();
        }
        return peeked;
    }

    bool empty() { return input.empty() && output.empty(); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
