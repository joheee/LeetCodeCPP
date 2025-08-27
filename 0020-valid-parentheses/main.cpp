class Solution {
public:
    bool isValid(string s) {
        // odd string length validate
        if(s.length() % 2 == 1) return false;
        // prepare for tracking the open bracket
        stack<char> st;
        // map for closing and open bracket
        unordered_map<char,char> match = {
            {')','('},
            {']','['},
            {'}','{'}
        };
        for(char c : s) {
            // its closing bracket
            if(match.count(c)) {
                // we found the closing bracket but the stack is empty
                // or the last stack isnt the correct opening bracket
                if(st.empty() || st.top() != match[c]) return false;
                // pop the stack
                st.pop();
            } else st.push(c);
        }
        return st.empty();
    }
};