#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.

	unordered_map<int,int> um;
	int maxL = 0;
	int sum=0;

	for(int i=0;i<arr.size(); i++)
	{
		sum=sum+arr[i];

		if(sum == 0)
			maxL = i+1;

		if(um.find(sum) != um.end())
		{
			maxL = max(maxL,i-um[sum]);
		}
		else
			um[sum] = i;
	}	
	return maxL;
}

int main()
{
    vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << getLongestZeroSumSubarrayLength(a) << endl;
}