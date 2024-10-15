#15. 3SUM
#MEDIUM 21-09-24
'''
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.
 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 

Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105

'''
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        x=[]
        l=0
        h=len(nums)-1
        nums.sort()
        x = []
        for k in range(0, len(nums)):
            if  k>0 and nums[k] == nums[k - 1]:
                continue  # Skip duplicate elements for k

            l = k + 1
            h = len(nums) - 1   

            while l < h:
                current_sum = nums[l] + nums[h]
                if current_sum == -nums[k]: 
                    x.append([nums[k], nums[l], nums[h]])
                    l += 1
                    h -= 1

                    # Skip duplicates for the second and third elements
                    while l < h and nums[l] == nums[l - 1]:
                        l += 1
                    while l < h and nums[h] == nums[h + 1]:
                        h -= 1

                elif current_sum > -nums[k]:
                    h -= 1
                else:
                    l += 1

        return x
      
        '''
        x=[]
        l=0
        h=len(nums)-1
        nums.sort()
        for k in range(0,len(nums)):
            
            while(l<h):
                if nums[l]+nums[h]==(-nums[k]):
                    x.append([nums[l],nums[h],nums[k]])
                    l=l+1
                    h=h-1
                elif nums[l]+nums[h]>nums[k]:
                    h=h-1
                else:
                    l=l+1
        return x
       '''
        
        '''x=[]
       s=set()
       nums.sort()
       se=set()
       for i in range(len(nums)-2):
            for j in range(i+1,len(nums)-1):
                for k in range(j+1,len(nums)):
                    if nums[i]+nums[j]+nums[k]==0:
                        
                        x.append([nums[i],nums[j],nums[k]])
                        
                        se={tuple(i) for i in x}

       return se'''
'''
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        x=[]
        l=0
        h=len(nums)-1
        nums.sort()
        for k in range(0,len(nums)):
            
            while(l<h):
                if nums[l]+nums[h]==(-nums[k]):
                    x.append([nums[l],nums[h],nums[k]])
                    l=l+1
                    h=h-1
                elif nums[l]+nums[h]>nums[k]:
                    h=h-1
                else:
                    l=l+1
        return x
      
       
  '''      
        '''x=[]
       s=set()
       nums.sort()
       se=set()
       for i in range(len(nums)-2):
            for j in range(i+1,len(nums)-1):
                for k in range(j+1,len(nums)):
                    if nums[i]+nums[j]+nums[k]==0:
                        
                        x.append([nums[i],nums[j],nums[k]])
                        
                        se={tuple(i) for i in x}

       return se'''