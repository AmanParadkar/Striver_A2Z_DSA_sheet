#include<iostream>
using namespace std;

bool rotateString(string s, string goal) {
    int n = s.size();
    for(int i=0;i<s.size();i++)
    {
        char ch = s[0];
        s = s.substr(1,n) +ch;

        if(s == goal)
            return true;
    }
    return false;
}

int main()
{
    string s = "abcde", goal = "cdeab";
    cout<<rotateString(s,goal);
}