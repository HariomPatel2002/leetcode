class Solution {
public:
    
    string reverseParentheses(string s) {
       stack<char> stack;
        for (auto it : s) {
            if (it == ')') {
                string s1;
                while (!stack.empty() && stack.top() != '(') {
                    char k = stack.top();
                    if (k != ')') {
                        s1 += k;
                    }
                    stack.pop();
                }
                if (!stack.empty() && stack.top() == '(') {
                    stack.pop(); // pop '('
                }
                for (auto ch : s1) {
                    stack.push(ch);
                }
            } else {
                stack.push(it);
            }
        }
        
        string t;
        while (!stack.empty()) {
            t += stack.top();
            stack.pop();
        }
        
        reverse(t.begin(), t.end());
        
        return t;
    }
};