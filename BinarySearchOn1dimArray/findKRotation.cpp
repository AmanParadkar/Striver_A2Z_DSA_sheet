/*Find out how many times the array has been rotated
Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values).
 Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated. */

#include<iostream>
#include<vector>
using namespace std;

int findKRotation(vector<int> &arr){
      
    int i = 0;
    int j = arr.size()-1;

    while(i<=j)
    {
        int mid = i + (j - i)/2;

        if(arr[i] < arr[mid])
        {
            if(arr[mid] < arr[j])
                j=mid-1;
            else
                i = mid + 1;
        }
        else 
        {
            if(arr[mid] < arr[j])
                j= mid;
            else    
                i = mid+1;
        }
       
    }
     return j;
}

int main()
{
    vector<int> nums = {2, 3, 4, 1};
    cout<<findKRotation(nums);
}