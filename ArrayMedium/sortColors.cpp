//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
//with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
//You must solve this problem without using the library's sort function.

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {

    int i,j,k;
    i = j = 0;
    k = nums.size()-1;

    while(j<=k)
    {
        if(nums[j] == 0)
        {
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[j] == 1)
            j++;
        else if(nums[j]==2)
        {
            swap(nums[j],nums[k]);
            k--;
        }
    }
}
int main()
{
    vector<int>nums = {2,0,2,1,1,0};
    sortColors(nums);

    for(int x: nums)
        cout<<x<<" ";
}