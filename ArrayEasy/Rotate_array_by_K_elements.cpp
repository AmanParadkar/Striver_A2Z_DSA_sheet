#include<bits/stdc++.h>
using namespace std;

vector<int> rotateByK(vector<int>A,int n,int k)
{
    k =k % n;

    reverse(A.begin(),A.begin()+(n-k));
    reverse(A.begin()+(n-k),A.end());
    reverse(A.begin(),A.end());

    return A;
}
int main()
{
    vector<int> A = {1,2,3,4,5,6,7};
    int n = A.size();
    
    A = rotateByK(A,n,2);

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
}
