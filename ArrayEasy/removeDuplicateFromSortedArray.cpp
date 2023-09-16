#include<iostream>
using namespace std;


//Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
//Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. 
//The remaining elements of nums are not important as well as the size of nums.
//Return k.
int removeDuplicate(int A[],int n)
{
    int i =0 ;

    for(int j=1;j<n;j++)
    {
        if(A[j]!=A[i])
        {
            i++;
            A[i]=A[j];
        }
    }
    return i;
}

int main()
{
    int A[]= {2,3,4,4,4,6,6,6,7,8,8,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    int k = removeDuplicate(A,n);
    for(int i=0;i<=k;i++)
    {
        cout<<A[i]<<" ";
    }
}