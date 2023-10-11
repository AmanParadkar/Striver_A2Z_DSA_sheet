#include<iostream>
#include<stack>
using namespace std;

string removeOuterParentheses(string s) {

    stack<int> st;    
    string ans="";

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            if(st.size() > 0)
            {
                ans = ans + s[i];
            }
            st.push(s[i]);
        }

        if(s[i]==')')
        {
            st.pop();
            if(st.size() > 0)
            {
                ans = ans + s[i];
            }
        }
    }
    return ans;
}

int main()
{
    cout<<removeOuterParentheses("(()())(())(()(()))");
} 
