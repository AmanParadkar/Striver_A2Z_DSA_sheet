#include<iostream>
#include<vector>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {

    int i = 0 ;
    int j = mat[0].size()-1;

    while(i <= j )
    {
        int mid = i + (j - i)/2;

        int maxRow = 0;

        for(int i = 0; i < mat.size(); i++)
        {
            if(mat[i][mid] >mat[maxRow][mid])
                maxRow = i;
        }

        int left = -1;
        int rigth = -1;

        if(mid - 1 >= 0 && mat[maxRow][mid-1] > mat[maxRow][mid]) 
            left = mat[maxRow][mid-1];
        
        if(mid + 1 < mat[0].size() && mat[maxRow][mid+1] > mat[maxRow][mid]) 
            rigth = mat[maxRow][mid+1];
        

        if(mat[maxRow][mid] >= left  && mat[maxRow][mid] >= rigth )
            return {maxRow,mid};
        else if(left > mat[maxRow][mid])
            j = mid - 1;
        else
            i = mid + 1;
    }
    return {-1,-1};
}

int main()
{

}