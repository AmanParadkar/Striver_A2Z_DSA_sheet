#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& A,int a)
{
    int totalTime = 0;
    for(int i = 0; i < A.size(); i++)
    {
        totalTime = totalTime + ceil((double)A[i]/(double)a);
    }
    return totalTime;
}

    
int minEatingSpeed(vector<int>& piles, int h) {

    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int ans = 0;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        
        if(solve(piles,mid) <= h)
            high = mid - 1;
        
        else 
            low = mid + 1;
        
    }
    return low;   
}

int main()
{
    vector<int> piles = {30,11,23,4,20};
    int h = 6;

    cout<<minEatingSpeed(piles,h);
}