#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {

    vector<int> ans;
    sort(nums.begin(),nums.end());
    int curr=nums[0];
    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(curr!=nums[i])
        {
            if(count>nums.size()/3)
            {
                ans.push_back(curr);
            }
            curr = nums[i];
            count=1;
        }
        else
            count++;
    }

    if(count>nums.size()/3)
        ans.push_back(curr);
    return ans;

}

int main()
{
    vector<int> nums = {3,2,3};
    vector<int> ans = majorityElement(nums);
    for(int x: ans)
        cout<<x<<" ";
}