#include<bits/stdc++.h>
using namespace std;

int solve(string s,int k)
{
    int count = 0;
    int j=0;
    unordered_map<char,int> um;

    for(int i=0;i<s.size();i++)
    {
        um[s[i]]++;

        while(um.size()>k)
        {
            um[s[j]]--;
            if(um[s[j]]==0)
                um.erase(s[j]);
            j++;
        }
        count = count+ (i-j+1);
    }
    return count;
}
int countSubStrings(string str, int k) 
{
    return solve(str,k) - solve(str,k-1);
}

int main()
{
    cout<<countSubStrings("abcad",2);
}