//Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        
    int maxSum = INT_MIN;
    int sum = 0;

    for(int i=0;i<nums.size();i++)
    {
        sum = sum+nums[i];

        if(sum > maxSum)
            maxSum = sum;

        if(sum<0)
            sum = 0;
    }
    return maxSum;
}
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubArray(nums);
    cout<<ans;
    return 0;
}