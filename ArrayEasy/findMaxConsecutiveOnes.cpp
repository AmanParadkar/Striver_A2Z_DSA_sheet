//Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {

    int maxi =0;
    int i = 0;
    int j = 0;

    while(j<nums.size())
    {
        if(nums[j] == 0)
        {
            maxi = max(maxi,j-i);
            j++;
            i=j;
        }
        else
            j++;
        
    }
    maxi = max(maxi,j-i);
    return maxi;
}

int main()
{
    vector<int> nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
}