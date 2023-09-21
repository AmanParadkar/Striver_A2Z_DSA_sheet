/*You are given a sorted array consisting of only integers where every element appears exactly twice,
 except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.
Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 */

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        
    if(nums.size() == 1)
        return nums[0];
    int i=0;
    int j=nums.size()-1;

    while(i<=j)
    {
        int mid = i+(j-i)/2;
        if(mid == 0)
        {
            if(nums[mid]!=nums[mid+1])
                return nums[mid];
        }
        if(nums[mid] == nums[mid-1])
        {
            int l = mid+1;
            if(l%2==0)
                i = mid+1;
            else
                j = mid-1;
        }
        else if(nums[mid] == nums[mid+1])
        {
            int r = nums.size()-1-mid+1;
            if(r%2==0)
                j = mid-1;
            else
                i = mid+1;
        }
        else
        {
            return nums[mid];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout<<singleNonDuplicate(nums);
}