class MinStack {
    stack<int> st;
    stack<int> stmin;
public:
    MinStack() {

    }

    void push(int val) {
        st.push(val);
        if (stmin.empty() || val <= stmin.top()) {
            stmin.push(val);
        }
    }

    void pop() {
        if (st.top() == stmin.top()) {
            stmin.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return stmin.top();
    }
};
