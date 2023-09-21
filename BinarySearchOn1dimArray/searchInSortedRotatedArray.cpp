#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {

    int i = 0;
    int j = nums.size()-1;

    while(i<=j)
    {
        int mid = i + (j - i)/2;

        if(nums[mid] == target)
            return mid;

        else if(nums[i] <= nums[mid])
        {
            if(target >= nums[i] && target < nums[mid])
                j = mid - 1;
            else
                i = mid + 1;
        }
        else
        {
            if(target >= nums[mid] && target <= nums[j])
                i = mid+1;
            else
                j=mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {6,7,8,9,1,2,3,4,5};
    int target =5;
    cout<<search(nums,target);
}