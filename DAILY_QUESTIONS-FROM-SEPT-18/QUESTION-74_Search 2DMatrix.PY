'''
74. Search a 2D Matrix
status:medium 20/09/24
ou are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
'''
class Solution:
    def searchMatrix(self, matrix, target: int):
        for sub in matrix:
            for i in sub:
                if i==target:
                    return True
        return False
ss=Solution()
print(ss.searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]], 3))#output=true
    