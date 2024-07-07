class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stack;
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            if (stack.empty() || s[i] == '(') {
                stack.push(i);
            } else { // s[i] == ')'
                if (!stack.empty() && s[stack.top()] == '(') {
                    stack.pop();
                    count = max(count, i - (stack.empty() ? -1 : stack.top()));
                } else {
                    stack.push(i);
                }
            }
        }
        return count;
    }
};
