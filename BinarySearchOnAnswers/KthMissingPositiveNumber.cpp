#include<iostream>
#include<vector>
using namespace std;

 int findKthPositive(vector<int>& arr, int k) {
        
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k) 
            low = mid + 1;
    
        else 
            high = mid - 1;
    
    }
    return k + high + 1;
    
}

int findKthPositive2(vector<int>& arr, int k) {
        
    int ans  = k;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > ans)
            return ans;
        ans++;
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    cout<<findKthPositive2(arr,k);
}