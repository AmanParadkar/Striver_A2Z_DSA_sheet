#include<iostream>
using namespace std;

void unionOFArrays(int A[],int B[],int n,int m)
{
    int i = 0;
    int j = 0;
    int k = -1;
    int C[100];

    while(i<n && j<m)
    {
        if(A[i] < B[j])
        {
            if(k==-1 || C[k] != A[i])
                C[++k] =A[i];
            i++;
        }
        else if(A[i] > B[j])
        {
            if(k==-1 || C[k] != B[j])
                C[++k] = B[j];
            j++;

        }
        else
        {
            C[++k] = A[i];
            i++;
            j++;
        }
    }

    while(i<n)
    {
        if(A[i] != C[k])
            C[++k] = A[i];
        i++;
    }

    while(j<m)
    {
        if(B[j] != C[k])
            C[++k] = B[j];
        j++;
    }
    
    for(int i=0;i<=k;i++)
        cout<<C[i]<<" ";
}
int main()
{
    int A[] = {1,1,2,4,6,7,9,12,13};
    int B[] = {2,3,4,5,6,6,7};

    unionOFArrays(A,B,9,7);

}