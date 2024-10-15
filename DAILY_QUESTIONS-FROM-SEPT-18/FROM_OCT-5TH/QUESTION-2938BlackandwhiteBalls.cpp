/*
2938. Separate Black and White Balls

date: 14-10-24
https://leetcode.com/problems/separate-black-and-white-balls/description/?envType=daily-question&envId=2024-10-15

status:medium(daily challenge)


There are n balls on a table, each ball has a color black or white.

You are given a 0-indexed binary string s of length n, where 1 and 0 represent black and white balls, respectively.

In each step, you can choose two adjacent balls and swap them.

Return the minimum number of steps to group all the black balls to the right and all the white balls to the left.


Input: s = "101"
Output: 1
Explanation: We can group all the black balls to the right in the following way:
- Swap s[0] and s[1], s = "011".
Initially, 1s are not grouped together, requiring at least 1 step to group them to the right.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c=0;
        int l=0;
        string s="1100101001";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                c=c+(i-l);
                l++;
            }
            
            
        }
        cout<<c;

    return 0;
}