#include<iostream>
using namespace std;

int floorSqrt(int n)
{
    if(n==0 || n==1)
        return n;
    long long int ans=n;

    int i = 1;
    int j = n;

    while(i<=j)
    {
        long long int mid = i + (j - i)/2;

        if(mid * mid == n)
        {
            return mid;
        } 
        if(mid * mid < n )
        {
            ans = mid;
            i = mid +1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return ans;
}


int main()
{
    cout<<floorSqrt(67);
}