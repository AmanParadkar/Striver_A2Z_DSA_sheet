#include<iostream>
#include<vector>
using namespace std;

int right(vector<int> &nums,int target)
{
	int i = 0;
	int j = nums.size()-1;
	int ans = -1;
	while(i<=j)
	{
		int mid = i+(j-i)/2;

		if(nums[mid] == target)
		{
			ans = mid;
			i=mid+1;
		}
		else if(nums[mid] < target)
		{
			i=mid+1;
		}
		else
		{
			j=mid-1;
		}
	}
	return ans;
}

int left(vector<int> &nums,int target)
{
	int i = 0;
	int j = nums.size()-1;
	int ans = -1;
	while(i<=j)
	{
		int mid = i+(j-i)/2;

		if(nums[mid] == target)
		{
			ans = mid;
			j = mid - 1;
		}
		else if(nums[mid] < target)
			i = mid + 1;
		else 
		{
			j = mid - 1;
		}
	}
	return ans;
}

int count(vector<int>& arr, int x) {

	int a = right(arr,x);
	int b = left(arr, x);
	
	if(a==-1 && b==-1)
		return 0;
	return a-b+1;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,5,5,5,5,5,7,9,101};
    int x = 5;
    cout<<count(nums,x);
}