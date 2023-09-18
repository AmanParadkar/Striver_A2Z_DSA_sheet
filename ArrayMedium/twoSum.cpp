//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int,int> um;
    vector<int> ans;

    for(int i=0;i<nums.size();i++)
    {
        if(um.find(target-nums[i])!=um.end())
        {
            ans.push_back(i);
            ans.push_back(um[target-nums[i]]);
            break;
        }
        else
        {
            um[nums[i]]=i;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2,7,11,15};
    int  target = 9;

    vector<int> ans = twoSum(nums,target);

    for(int x: ans)
        cout<<x<<" ";
}