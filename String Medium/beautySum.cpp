/*781. Sum of Beauty of All Substrings
The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

For example, the beauty of "abaacc" is 3 - 1 = 2.
Given a string s, return the sum of beauty of all of its substrings
Example 1:

Input: s = "aabcb"
Output: 5
Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.*/
#include<bits/stdc++.h>
using namespace std;

int beautySum(string s) {

    int count= 0;

    for(int i = 0; i < s.size(); i++)
    {
        unordered_map<char,int> um;
        for(int j = i; j < s.size(); j++)
        {
            um[s[j]]++;
        
            int mini = INT_MAX;
            int maxi = 0;

            for(auto it : um)
            {
                mini = min(mini,it.second);
                maxi = max(maxi,it.second);
            }
            count = count + (maxi - mini);
        }
    }
    return count;
}

int main()
{
    cout<<beautySum("aabcb"); 
}