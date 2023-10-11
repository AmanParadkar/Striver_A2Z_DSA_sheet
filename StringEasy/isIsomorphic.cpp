#include<iostream>
#include<unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {

    unordered_map<char,char> um;
    unordered_map<char,char> um1;

    for(int i=0;i<s.size();i++)
    {
        if(um.find(s[i])!=um.end())
        {
            char ch = um[s[i]];
            if(ch != t[i])
                return false;
        }
        else
            um[s[i]]=t[i];

        if(um1.find(t[i])!=um1.end())
        {
            char ch = um1[t[i]];
            if(ch != s[i])
                return false;
        }
        else
            um1[t[i]]=s[i]; 
    }
    return true;
}

int main()
{
    string s = "egg", t = "add";
    cout<<isIsomorphic(s,t);
}