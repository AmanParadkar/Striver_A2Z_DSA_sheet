#include<iostream>
#include<vector>
using namespace std;

int search(vector<vector<int>> &matrix, int row, int n)
{
    if(matrix[row][0]==1)
        return n;
    
    int i = 0;
    int j = n-1;
    int ans = 0;
    while(i <= j)
    {
        int mid = i + (j - i)/ 2;

        if(matrix[row][mid]==1)
        {
            ans = mid;
            j = mid -1;
        }
        else
            i = mid + 1;
          
    }
    if(ans == 0)
        return 0;
    return n - ans;

}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int RowAns = -1;
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        int temp = search(matrix,  i,  m);
        if(temp > ans)
        {
            RowAns = i;
            ans = temp;
        }
    }
    return RowAns;
}
int main()
{
    vector<vector<int>> matrix = {{1,1,1},{0,0,1},{0,1,1}};
    cout<<rowWithMax1s(matrix,3,3);
}