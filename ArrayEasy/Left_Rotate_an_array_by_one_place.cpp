#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& temp,int i,int j)
{
    while(i<j)
    {
        swap(temp[i],temp[j]);
        i++;
        j--;
    }
}
void rotate(vector<int>& nums, int k) {
    
    k=k%nums.size();

    reverse(nums,0,nums.size()-1);
    reverse(nums,k,nums.size()-1);
    reverse(nums,0,k-1);
}

int main()
{
    vector<int> A = {1,2,3,4,5,6,7};
    rotate(A,3);

    for(int x: A)
        cout<<x<<" ";
}