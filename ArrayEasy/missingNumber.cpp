#include<iostream>
using namespace std;

int missing(int A[],int n)
{
    int total = (n*(n+1))/2;

    int ArrayTotal =0;

    for(int i=0; i<n; i++)
        ArrayTotal=ArrayTotal+A[i];

    return total-ArrayTotal;

}
int main()
{
    int A[] = {3,0,1};
    cout<<missing(A,3);
}