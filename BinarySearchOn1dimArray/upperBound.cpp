#include<iostream>
#include<vector>
using namespace std;

int upperBound(vector<int> &arr, int x, int n){
	
	int i = 0;
	int j = n-1;
	int ans = n;

	while(i <=j)	
	{
		int mid = i+(j-i)/2;

		if(arr[mid] > x)
		{
			ans = mid;
			j = mid - 1;
		}
		else
			i = mid + 1;
	}
	return ans;
}

int main()
{
    int n = 5;
    int x = 10;
    vector<int> A={1, 2, 5, 6, 10};   
    cout<<upperBound(A,x,n);
}