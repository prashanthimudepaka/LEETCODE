'''question:120
status: medium 19/9/24
Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally,
 if you are on index i on the current row, you may move to
   either index i or index i + 1 on the next row.
'''

triangle=[[2],[3,4],[6,5,7],[4,1,8,3]]
dp = [0]*(len(triangle)+1)
print(dp)
for row in triangle[::-1]:
    for i,n in enumerate(row):
        dp[i]=n + min(dp[i],dp[i+1])
        #print(dp[i])
    #print(dp)
'''
assume a tree and think min(a,b) a nd b are childrens of n sum the parent with min child
[0, 0, 0, 0, 0]

row=-1
dp[0]=4   (4+min(dp[0]=0,dp[1]=0)
dp[1]=1    1+min(dp[1]=0+dp[2]=0)
dp[2]=8     8+min(dp[2]=0+dp[3]=0)
dp[3]=3     3
[4, 1, 8, 3, 0]

row=-2
dp[0]=7   6+min(dp[0]=4,dp[1]=1)
dp[1]=6   5+min(dp[1],dp[2])
dp[2]=10  7+min(dp[2],dp[3])
[7, 6, 10, 3, 0]
row=-3
dp[0]= 9   3+min(dp[0]+dp[1])
dp[1]= 10   4+min(dp[1],dp[2])
[9, 10, 10, 3, 0]
row=-4
dp[0]=11   2+min(9,10)

result =dp[0]
dp= [11, 10, 10, 3, 0]

        2(11)
   
     (9)3  4(10)
 
   (7)6 (6)5  7(10)

 (0)4  (0)1   (0)8   3(0) 
0     0     0     0     0    
dp=[0,0,0,0,0] 



'''
print(dp[0]) #output =The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 
''' 
    2
   3 4
  6 5 7
 4 1 8 3
0 0 0 0 0   <-len(triangle)+1
'''
'''
    0 1  2  3 4
dp =[0,0,0,0,0]
triangle[-1]=4,1,8,3
             0 1 2 3
          dp[0]=4+min(0,0)==4
          dp[1]=1+min(0,0)==1
          dp[2]=8
          dp[3]=3
    triangle[-2]=6,5,7
    dp[0]=6+min(4,1)=7
    dp[1]=


'''