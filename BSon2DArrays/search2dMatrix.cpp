#include<iostream>
#include<vector>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();
    int low = 0;
    int high = (row * col) -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(matrix[mid/col][mid%col] == target)
            return true;
        else if(matrix[mid/col][mid%col] < target)
            low = mid +1;
        else
            high = mid - 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}} ;
    int target = 3;

    cout<<searchMatrix(matrix,target);
}