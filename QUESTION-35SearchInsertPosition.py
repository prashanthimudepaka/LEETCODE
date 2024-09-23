#35. Search Insert Position
#easy 22-09-24
'''
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104

'''
class Solution(object):
    def searchInsert(self, nums, target):
        l=0
        h=len(nums)-1
        while(l<=h):
            mid=(l+h)//2
            if(nums[mid]==target):
                return mid
            elif nums[mid]<target:
                l=mid+1
            else:
                h=mid-1
        return l