/*Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence 
are consecutive integers, the consecutive numbers can be in any order.*/

#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
    unordered_set<int> st;
    int longestStreak=0;
    
    for(int i=0;i<N;i++)
    {
        st.insert(arr[i]);
    }
    
    for(int i=0;i<N;i++)
    {
        if(st.find(arr[i]-1)==st.end())
        {
            int currentElement =arr[i];
            int streak=1;
            
            while(st.find(currentElement+1) != st.end())
            {
                currentElement++;
                streak++;
            }
            longestStreak= max(longestStreak,streak);
        }
    }
    return longestStreak;
}

int main()
{

    int N = 7;
    int a[] = {2,6,1,9,4,5,3};
    cout<<findLongestConseqSubseq(a,N);
}