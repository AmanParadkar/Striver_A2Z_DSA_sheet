//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//You must implement a solution with a linear runtime complexity and use only constant extra space.
#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums)
{    
    int n=0;
    for(int i=0;i<nums.size();i++)
    {
        n=n^nums[i];
    }
    return n;
}
int main()
{
    vector<int> nums = {4,1,2,1,2};
    cout<<singleNumber(nums);
}