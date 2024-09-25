'''

53. Maximum Subarray 
status:medium  18/09/24

Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
'''

class Solution:
    def maxSubArray(self, nums):
        sum=nums[0]
        ans=nums[0]
        for i in range(1,len(nums)):
            if sum>0:
                sum+=nums[i]
            else:
                sum=nums[i]
            ans=max(ans,sum)
        return ans
ss=Solution()
print(ss.maxSubArray([-2,1,-3,4,-1,2,1,-5,4]))

'''greater=0
        n = len(nums)
        subarrays = []
        
        # Outer loop picks the starting point
        for i in range(n):
            # Inner loop picks the ending point
            for j in range(i, n):
                # Append the subarray from index i to j
                subarrays.append(nums[i:j+1])
                
        su=[sum(c) for c in subarrays]    
        greater=max(su)
        return greater '''

'''greater=0
        l=[]
        
        for i in range(len(nums)):
            sub=[]
            sub.append(nums[i])
            s=sum(sub)
            greater=max(s,greater)
            if s>greater:
                break
        return greater  '''