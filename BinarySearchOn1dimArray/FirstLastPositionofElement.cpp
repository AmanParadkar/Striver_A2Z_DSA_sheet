/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
  If target is not found in the array, return [-1, -1].
  You must write an algorithm with O(log n) runtime complexity.
*/

#include<iostream>
#include<vector>
using namespace std;

int right(vector<int> &nums,int target)
{
    int i = 0;
    int j = nums.size()-1;
    int ans = -1;
    while(i<=j)
    {
        int mid = i+(j-i)/2;

        if(nums[mid] == target)
        {
            ans = mid;
            i=mid+1;
        }
        else if(nums[mid] < target)
        {
            i=mid+1;
        }
        else
        {
            j=mid-1;
        }
    }
    return ans;
}

int left(vector<int> &nums,int target)
{
    int i = 0;
    int j = nums.size()-1;
    int ans = -1;
    while(i<=j)
    {
        int mid = i+(j-i)/2;

        if(nums[mid] == target)
        {
            ans = mid;
            j = mid - 1;
        }
        else if(nums[mid] < target)
            i = mid + 1;
        else 
        {
            j = mid - 1;
        }
    }
    return ans;
}
vector<int> searchRange(vector<int>& nums, int target) {

        return {left(nums,target), right(nums,target)};
}

int main()
{
    vector<int> nums = {1,2,3,4,4,4,4,4,5,6,7,7,8};
    int target = 4;
    vector<int> ans  = searchRange(nums,target);

    for(int x: ans)
    {
        cout<<x<<" ";
    }
}