'''
7. Reverse Integer
status:own
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 
-231 <= x <= 231 - 1
'''
class Solution:
    def reverse(self, x: int) -> int:
        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        if(x<0):
            x*=-1
            s=str(x)
            r=int(s[::-1])
            if  r< INT_MIN or r > INT_MAX:
                 return 0
            return -r
        s=str(x)
        r=int(s[::-1])

        if  r< INT_MIN or r > INT_MAX:
            return 0
        
        return r
ss=Solution()
print(ss.reverse(20))