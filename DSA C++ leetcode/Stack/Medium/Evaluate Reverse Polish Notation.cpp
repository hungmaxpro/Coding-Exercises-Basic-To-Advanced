class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (const string& i : tokens) {
            if (i == "+") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int c = a + b;
                s.push(c);
            }
            else if (i == "-") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int c = b - a;
                s.push(c);
            }
            else if (i == "*") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int c = a * b;
                s.push(c);
            }
            else if (i == "/") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int c = b / a;
                s.push(c);
            }
            else {
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};
