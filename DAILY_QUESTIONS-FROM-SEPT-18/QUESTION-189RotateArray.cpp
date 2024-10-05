/*189. Rotate Array
status:medium
date: 27-09-24
Given an integer array nums, rotate the
 array to the right by k steps, where k is non-negative.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?
*/
#include<bits/stdc++.h>
using namespace std;
/*

class Solution {
public:
    void rotate(vector<int>& nums, int k ) {
      if(1 <= nums.size() <= 10^5 && 0 <= k <= 10^5 ){
         k = k % nums.size();
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());
      }

    }
};

//class Solution {
//public:
  //  void rotate(vector<int>& nums, int k ) {
    /*int n = nums.size();
    k = k % n;  // Ensure k is within the array size
    if (k == 0)
     return;  // No need to rotate if k is 0

    for (int step = 0; step < k; step++) {
        // Save the last element
        int last = nums[n - 1];
        
        // Shift all elements to the right by one position
        for (int i = n - 1; i > 0; i--) {
            nums[i] = nums[i - 1];
        }

        // Place the last element in the first position
        nums[0] = last;
    }*/
//}
//};
    
    
    /*int n=nums.size();
    k=k%n; 
    while(k+1>0){
    int first=nums[0];
    for(int i=0;i<n-1;i++)
    {
        nums[i]=nums[i+1];
    }
    nums[n-1]=first;
    k--;
    }
      
       
    }
};*/

*/


int main()
{
    int k=3;
    vector<int> nums;
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        nums.emplace(nums.end(),value);
    }

     k = k % nums.size();
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());
         for(int i=0;i<n;i++)
    {
        cout<<nums[i];
    }
       return 0;
    }
   /*  k = k % n;
    for(int step=0;step<k;step++)
    {
        int last=v[n-1];
        for (int i = n - 1; i > 0; i--) {
            v[i] = v[i - 1];
        }

        // Place the last element in the first position
        v[0] = last;
    } 
   
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }

    return 0;

    }

   */

    
    
    /*int n=nums.size();
    k=k%n; 
    while(k+1>0){
    int first=nums[0];
    for(int i=0;i<n-1;i++)
    {
        nums[i]=nums[i+1];
    }
    nums[n-1]=first;
    k--;
    }
      
       
    }
};*/