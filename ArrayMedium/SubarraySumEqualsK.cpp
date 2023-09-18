#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {

    unordered_map<int,int> mp;

    int prefix = 0;
    mp[0] =1;
    int count = 0;

    for(int i=0;i<nums.size();i++)
    {
        prefix = prefix+nums[i];

        int rem = prefix - k;

        count = count + mp[rem];

        mp [prefix]++;
    }
    return count;
}


int main()
{
    vector<int> nums = {1,1,1};
    int k = 2;

    cout<<subarraySum(nums,k);
}
