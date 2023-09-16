#include<iostream>
using namespace std;

int secondLargest(int A[],int n)
{
    int fLargest = A[0];
    int sLargest = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(A[i] > fLargest)
        {
            sLargest =fLargest;
            fLargest = A[i];
        }
        else if(A[i] < fLargest && A[i] > sLargest)
            sLargest = A[i];
        
    }
    return sLargest;
}

int main()
{
    int A[]= {2,1,8,3,7,6};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<secondLargest(A,n);
}