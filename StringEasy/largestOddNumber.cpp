#include<iostream>
using namespace std;

string largestOddNumber(string num) {

    for(int i = num.size()-1; i>=0; i--)
    {
        if((int)(num[i]-'0') % 2 != 0)
            return num.substr(0,i+1);
    }
    return "";
}

int main()
{
    string nums = "35427"; 
    cout<<largestOddNumber(nums);
}
