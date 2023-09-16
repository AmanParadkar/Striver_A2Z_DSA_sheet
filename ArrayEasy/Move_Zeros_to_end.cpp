#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& A) 
{
    if(A.size()==1)
        return; 
    int n = A.size();
    int i = 0;
    while(i<A.size() && A[i]!=0 )
    {
        i++;
    }
    for(int j = i;j<n;j++)
    {
        if(A[j]!=0)
        {
            swap(A[i],A[j]);
            i++;
        }   
    }
}

void moveZeroes2(vector<int>& nums) {

    int j=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            j=i;
            break;
        }    
    }
    int i=0;

    while(j<nums.size())
    {
        if(nums[j]!=0)
        {
            nums[i]=nums[j];
            i++;
        }
        j++;
    }

    while(i<nums.size())
    {
        nums[i]=0;
        i++;
    }
}
int main()
{
    vector<int> A = {0,1,0,3,12};
    moveZeroes2(A);

    for(int x:A)
        cout<<x<<" ";
}