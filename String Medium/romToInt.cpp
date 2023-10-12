#include<bits/stdc++.h>
using namespace std;

int rom(char c)
{
    switch(c)
    {
        case 'I': 
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        
    }
    return 0;
}

int romanToInt(string s) {

    int ans=0;
    int prev=0;
    int curr=0;
    
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        curr=rom(ch);

        if(prev< curr)
        {
            ans=ans-prev;
            curr =curr-prev;
            ans+=curr;
            prev=curr;
        }
        else
        {
            prev=curr;
            ans=ans+curr;
        }

    }
    return ans; 
}
int main()
{
       cout<<romanToInt("MCMXCIV");
}