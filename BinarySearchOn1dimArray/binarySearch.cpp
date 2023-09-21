#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
        
    int n=nums.size();
    int i=0;
    int j=n-1;
    int mid=i+(j-i)/2;
    
    while(i<=j)
    {
        int midele=nums[mid];
        
        if(midele==target)
            return mid;
        
        else if(target<midele)
            j=mid-1;  
        
        else
            i=mid+1;
        
        mid=i+(j-i)/2;
    }
    return -1;
}

int main()
{

    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout<<search(nums,target);

}