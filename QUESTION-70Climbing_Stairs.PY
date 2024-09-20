'''
70. Climbing Stairs
STATUS:EASY  date:20/9/24
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45

'''
class Solution:
    def climbStairs(self, n: int) -> int:
        
        #dynamic programming
            # Base case for 0 or 1 step
        if n <= 1:
            return 1
        
        # Initialize the first two steps
        first = 1  # ways to reach step 0//number of ways to reach step 0 (you can just stand there).
        second = 1 # ways to reach step 1//number of ways to reach step 1 (you take 1 step to reach here).
        
        # number of ways for each step from 2 to n
        for i in range(2, n + 1):
            current = first + second    
            first = second
            second = current
        
        return second
        # first=1 --> initially o step we should reach for that 1 step
        #second=1--> 
        #ways to step 1= ways to step 0(1) + ways to step(-1) 0=1 way   --->first=1  //ways to  step 0
                #second=current==second=1
#Ways to step 2 = Ways to step 1 (1) + Ways to step 0 (1) = 2 ways.
#Ways to step 3 = Ways to step 2 (2) + Ways to step 1 (1) = 3 ways.
#Ways to step 4 = Ways to step 3 (3) + Ways to step 2 (2) = 5 ways.
#Ways to step 5 = Ways to step 4 (5) + Ways to step 3 (3) = 8 ways.
                      # step n-1             step  n-2
ss=Solution()
print(ss.climbStairs(5))