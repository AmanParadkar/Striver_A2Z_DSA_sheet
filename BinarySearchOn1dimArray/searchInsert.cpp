/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not,
  return the index where it would be if it were inserted in order.
  You must write an algorithm with O(log n) runtime complexity.
*/

#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& A, int target) {
        
    int i=0;
    int j=A.size()-1;

    while(i<=j)
    {
        int mid = (i+j)/2;

        if(A[mid] == target)
            return mid;
        else if(A[mid] < target)
            i=mid+1;
        else
            j=mid-1;
    }
    return i;
}

int main()
{
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout<<searchInsert(nums,target);
}
