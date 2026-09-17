class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char>st;
        for(char ch1 : s)
        {
            if(ch1 == '#')
            {
            if(!st.empty())
            st.pop();
            }
            else
            {
            st.push(ch1);
            }
        }
            string ans1;
            while(!st.empty())
            {
            ans1 += st.top();
            st.pop();
            }


            stack<char>st1;
        for(char ch2 : t)
        {
            if(ch2 == '#')
        {
        if(!st1.empty())
        st1.pop();
        }
        else
        {
        st1.push(ch2);
        }
        }
            string ans2;
            while(!st1.empty())
            {
            ans2 += st1.top();
            st1.pop();
            }
            if(ans1 == ans2)
            return true;
            else 
            return false;

    }
};