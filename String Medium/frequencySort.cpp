#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {

    unordered_map<char,int> um;

    for(auto it :s)
    {
        um[it]++;
    }
    priority_queue<pair<int,char>> pq;

    for(auto it: um)
    {
        pq.push({it.second,it.first});
    }
    int k=0;
    int j =0;
    while(!pq.empty())
    {
        pair<int,char> pair1 = pq.top();
        k= pair1.first;
        char ch = pair1.second;
        
        while(k!=0)
        {
            s[j++]= ch;;
            k--;
        }
        pq.pop();
    }
    return s;
}
int main()
{
    string s = "tree";
    cout<<frequencySort(s); 
}