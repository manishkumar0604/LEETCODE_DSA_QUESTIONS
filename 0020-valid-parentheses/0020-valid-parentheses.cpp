class Solution {
public:
    bool isValid(string s) {
         stack<char> st;

        // Traverse each character in the string
        for (char ch : s) {
            // If the character is an opening bracket, push it onto the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // If the character is a closing bracket
            else {
                // Check if the stack is empty (no opening bracket for the closing bracket)
                if (st.empty()) {
                    return false;
                }
                // Check if the top of the stack matches the corresponding opening bracket
                char top = st.top();
                if (top == '(' && ch == ')') {
                    st.pop();
                } else if (top == '[' && ch == ']') {
                    st.pop();
                } else if (top == '{' && ch == '}') {
                    st.pop();
                } else {
                    // If the bracket doesn't match, return false
                    return false;
                }
            }
        }

        // If the stack is empty, all brackets are matched and valid
        return st.empty();
        
    }
};