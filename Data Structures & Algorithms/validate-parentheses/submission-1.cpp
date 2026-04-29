class Solution {
   public:
    bool isValid(string s) {
        // [ { ( => open
        // ] } ) => closed
        stack<int> st;
        for (char c : s) {
            if (c == '[' || c == '{' || c == '(') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                int top = st.top();
                if (
                    (top == '[' && c == ']') || 
                    (top == '{' && c == '}') ||
                    (top == '(' && c == ')')
                    ) {
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};
