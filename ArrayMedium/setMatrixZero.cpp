//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//You must do it in place.

#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {

    int col0=1;
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0] = 0;

                if(j!=0)
                    matrix[0][j] = 0;
                else
                    col0= 0;
            }
        }
    }

    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(matrix[i][j]!=0)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
        }
    }
    
    if(matrix[0][0]==0)
    {
        for(int i=0;i<col;i++)
            matrix[0][i] =0;
    }

    if(col0 ==0)
    {
        for(int i=0;i<row;i++)
            matrix[i][0] =0;
    }
    
}

int main()
{
    vector<vector<int>> matrix  = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);

    for(vector<int> x : matrix)
    {
        for(int a : x)
            cout<<a<<" ";
        cout<<endl;
    }
}

