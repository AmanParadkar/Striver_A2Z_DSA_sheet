/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 */

#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    vector<int> temp = intervals[0];

    for(int i=0;i<intervals.size();i++)
    {
        if(temp[1] < intervals[i][0])
        {
            ans.push_back(temp);
            temp = intervals[i];
        }
        else
        {
            temp[1] = max(temp[1],intervals[i][1]);
        }
    }
    ans.push_back(temp);
    return ans;
}

int main()
{
    vector<vector<int>>intervals = {{1,3},{2,6},{8,10},{15,18}};
}