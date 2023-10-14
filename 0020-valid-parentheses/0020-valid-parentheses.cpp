class Solution {
public:
    bool isValid(string s) {
        stack <char> st;

        st.push(s[0]);

        int ss = s.size();

        for(int i = 1; i < ss; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else if(s[i] == ')' && !st.empty())
            {
                if(st.top() == '(') st.pop();
                else st.push(')');
            }
            else if(s[i] == '}' && !st.empty())
            {
                if(st.top() == '{') st.pop();
                else st.push('}');
            }
            else if(s[i] == ']' && !st.empty())
            {
                if(st.top() == '[') st.pop();
                else st.push(']');
            }
            else st.push(s[i]);

        }

        if(!st.empty()) return false;
        return true;


    }
};