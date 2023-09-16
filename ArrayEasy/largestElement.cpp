#include<bits/stdc++.h>
#include<vector>
using namespace std;

int largestElement(vector<int> A)
{
    int max = INT_MIN;

    for(int i=0; i<A.size(); i++)
    {
        if(A[i] > max)
            max = A[i];
    }
    return max;
}
int largestElement2(vector<int> A)
{
    return *max_element(A.begin(),A.end());
}
int main()
{
    vector<int> A={65,5,22,66,22,11,67,55,44,77,5};
    cout<<largestElement(A)<<endl;
    cout<<largestElement2(A);
}