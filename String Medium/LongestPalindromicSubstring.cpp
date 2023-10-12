#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string str)
{
    int n = str.size();
    int start = 0;
    int end = 1;
    int low;
    int high;

    for(int i=1; i < str.size(); i++)
    {
        // for even
        low = i-1;
        high = i;

        while(low >=0 && high < n && str[low] == str[high] )
        {
            if(high - low + 1 > end )
            {
                start = low;
                end = high - low + 1; 
            }
            low--;
            high++;
        }
        // for odd

        low = i-1;
        high = i+1;
        while(low >=0 && high < n && str[low] == str[high] )
        {
            if(high - low + 1 > end )
            {
                start = low;
                end = high - low + 1; 
            }
            low--;
            high++;
        }
    }
    string ans ="";

    for(int i=start;i<=start+end-1;i++)
    {
        ans = ans+str[i];
    }
    return ans;
}


int main()
{
    cout<<longestPalindrome("babad");
}