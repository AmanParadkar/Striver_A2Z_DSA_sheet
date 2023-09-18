#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {

    int row_start = 0;
    int row_end = matrix.size()-1;

    int col_start = 0;
    int col_end = matrix[0].size()-1;

    vector<int> ans;

    int total = ( matrix.size() * matrix[0].size() );
    int k=0;

    while(k<total)
    {

        for(int i = col_start; k<total &&i <= col_end; i++ )
        {
            ans.push_back(matrix[row_start][i]);
            k++;
        }
        row_start++;

        for(int i = row_start; k<total && i <= row_end ; i++ )
        {
            ans.push_back(matrix[i][col_end]);
            k++;
        }
        col_end--;

        for(int i = col_end; k<total && i >= col_start  ; i-- )
        {
            ans.push_back(matrix[row_end][i]);
            k++;
        }
        row_end--;

        for(int i = row_end; k<total && i >= row_start ; i-- )
        {
            ans.push_back(matrix[i][col_start]);
            k++;
        }
        col_start++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans = spiralOrder(matrix);

    for(int x : ans )
        cout<<x<<" ";
}