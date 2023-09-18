/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
You should rearrange the elements of nums such that the modified array follows the given conditions:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

    vector<int> ans(nums.size());
    int positive = 0;
    int negative = 1;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] >0)
        {
            ans[positive] = nums[i];
            positive+=2;
        }
        else
        {
            ans[negative] =nums[i];
            negative+=2;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3,1,-2,-5,2,-4};
    rearrangeArray(nums);
    for(int x: nums)
        cout<<x<<" ";
}