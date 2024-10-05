//263. Ugly Number
//status: easy
//date: 5-010-24
/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

 

Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
 

Constraints:

-231 <= n <= 231 - 1


*/

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
        {
            return false;
        }
        vector<int>v ={2,3,5};
        for(int i=0;i<v.size();i++)
        {
            while(n%v[i]==0)
            {
                n=n/v[i];
            }
        }
        return n==1;
    }
};