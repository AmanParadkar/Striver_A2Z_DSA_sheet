#include<iostream>
using namespace std;

int maxDepth(string s) {
        
    int brack = 0, depth_bracket = 0;
    for(char bracket: s){
        if(bracket == '(')brack++;
        else if(bracket ==')') brack--;
        depth_bracket = max(depth_bracket, brack);
    }
    return depth_bracket;
}

int main()
{
    string s = "(1+(2*3)+((8)/4))+1";
    cout<<maxDepth(s);
}