/*. Find Minimum in Rotated Sorted Array
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example,
 the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.
 */
#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
        
    int i = 0;
    int j = nums.size()-1;
    int mid= 0;
    while(i<=j)
    {
            mid = i + (j - i)/2;

        if(nums[i] < nums[mid])
        {
            if( nums[i] < nums[j])
                j = mid - 1;
            else
                i = mid + 1;
        }
        else
        {
            if(nums[mid] < nums[j])
                j = mid;
            else
                i = mid + 1;
        }
    }
    return nums[mid];
}

int main()
{
    vector<int> nums = {3,4,5,1,2};
    cout<<findMin(nums);
}