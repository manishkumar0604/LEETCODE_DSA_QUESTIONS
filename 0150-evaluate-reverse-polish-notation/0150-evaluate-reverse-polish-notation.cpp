class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n=tokens.size();
        int result=0;

        for(int i=0;i<n;i++)
        {
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            {
                st.push(stoi(tokens[i]));   // convert string → int
            }
            else
            {

                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if(tokens[i] == "+")
                    result = a + b;
                else if(tokens[i] == "-")
                    result = a - b;
                else if(tokens[i] == "*")
                    result = a * b;
                else if(tokens[i] == "/")
                    result = a / b;

                st.push(result);   // push result back
            }
        }
        return st.top();
    }
};
