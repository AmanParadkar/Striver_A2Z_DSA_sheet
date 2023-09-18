//Problem Statement: Given an array, print all the elements which are leaders.
// A Leader is an element that is greater than all of the elements on its right side in the array.

#include<bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>&a) {

    vector<int> ans;

    if(a.size()==1)
    {
        ans.push_back(a[a.size()-1]);
        return ans;
    }
    int greater = a[a.size()-1];
    ans.push_back(greater);

    int i = a.size()-2;

    while(i>=0)
    {
        if(a[i]>greater)
        {
            ans.push_back(a[i]);
            greater=a[i];
        }
        i--;
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<int> A={1,2,3,2};
    vector<int> ans = superiorElements(A);

    for(int x: ans)
        cout<<x<<" ";
} 
