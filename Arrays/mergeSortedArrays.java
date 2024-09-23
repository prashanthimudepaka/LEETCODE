
//88. Merge Sorted Array
//easy
/*
 You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 

Constraints:

nums1.length == m + n
nums2.length == n
0 <= m, n <= 200
1 <= m + n <= 200
-109 <= nums1[i], nums2[j] <= 109

 */
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1;  // Pointer for the end of valid elements in nums1
        int j = n - 1;  // Pointer for the end of nums2
        int k = m + n - 1;  // Pointer for the end of nums1 (total length)

        // Merge nums1 and nums2 starting from the end
        while (j >= 0) {//check if nums2 is not empty
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
}
        // int j=0;
       	// for(int i=0;i<nums1.length;i++)
        // {
        //     if(nums1[i]==0)
        //     {
        //         nums1[i]=nums2[j];
        //         j++;
        //     }
        // }
        // Arrays.sort(nums1);



	// 	int s1=nums1.length;
	// 	int s2=nums1.length+nums2.length;
	// 	nums1=Arrays.copyOf(nums1,s2);
	// 	int j=0;
	// 	for(int i=s1;i<s2;i++)
	// 	{
	// 	    nums1[i]=nums2[j];
	// 	    j++;
	// 	}
	// 	for(int i=0;i<nums1.length;i++){
	// 	    System.out.println(nums1[i]);
	// 	}
		
	// 	Arrays.sort(nums1); 
	//  int len = 0;
    //     for (int i=0; i<nums1.length; i++){
    //         if (nums1[i] != 0)
    //             len++;
    //     }
    //     int [] newArray = new int[len];
    //     for (int i=0, k=0; i<nums1.length; i++){
    //         if (nums1[i] != 0) {
    //             newArray[k] = nums1[i];
    //             k++;
    //         }
    //     }
    //    nums1=Arrays.copyOf(newArray,s2);
    
       
    