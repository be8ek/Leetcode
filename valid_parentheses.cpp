class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        char top; 
        for (int i=0; i<(int)s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]); 
                continue; 
            }
            if (st.empty()) {
                return false; 
            }
            switch (s[i]) {
                case ')' : 
                    top = st.top(); 
                    st.pop(); 
                    if (top != '(') {
                        return false; 
                    }
                    break; 
                case ']': 
                    top = st.top(); 
                    st.pop(); 
                    if (top != '[') {
                        return false; 
                    }
                    break; 
                case '}' : 
                    top = st.top(); 
                    st.pop(); 
                    if (top != '{') {
                        return false; 
                    }
                    break;
                default : 
                    return false; 
            }
        }
        return (st.empty()); 
    }
};