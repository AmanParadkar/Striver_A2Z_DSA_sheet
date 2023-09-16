#include<iostream>
using namespace std;

bool isSorted(int A[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(A[i]>A[i+1])
            return false;
    }
    return true; 
}
int main()
{
    int A[]= {1,2,3,4,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<isSorted(A,n);
}