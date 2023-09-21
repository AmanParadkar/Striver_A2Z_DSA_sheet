#include<iostream>
using namespace std;

int lowerBoound(int A[],int n,int x)
{
    int i = 0;
    int j = n-1;
    int ans = n;

    while(i<=j)
    {
        int mid = i+(j-i)/2;

        if(A[mid] >= x)
        {
            ans = mid;
            j = mid - 1;
        }
        else
            i = mid + 1;
    }
    return ans;
}
int main()
{
    int n = 6;
    int A[] = {1, 2, 2, 3, 3, 5};
    int x = 0;
    cout<<lowerBoound(A,n,x);
}