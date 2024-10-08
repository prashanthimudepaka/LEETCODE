/*
560. Subarray Sum Equals K
date: 08/10/2024
status: medium

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      
        unordered_map<int,int> mp;
        int sum=0,ans=0;
        mp[sum] = 1;     //initially count =1 for initial sum
        for(auto it:nums){
            sum += it;
            int find = sum - k;
            if(mp.find(find) != mp.end()){
                ans += mp[find];
            }
            mp[sum]++;
        }
        return ans;
    }
};
/*class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        vector<int>pre(arr.size(),0);
        pre[0] = arr[0];
        for(int i=1; i<arr.size(); i++){
            pre[i] = arr[i] + pre[i-1];
        }
        unordered_map<int,int> mp;
        int count = 0;
        for(int i=0; i<arr.size(); i++){
            if(pre[i] == k)
             count++;
             
            int remaining = pre[i] - k;
            // if the difference exist in map
            if(mp.find(remaining) != mp.end()) {
            count =count + mp[remaining];
            }
            mp[pre[i]]++;
            
        }
        return count;
    }
};*/

/*class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            unordered_map<int, int> prefix_sum_count;
    prefix_sum_count[0] = 1; // To account for subarrays starting from index 0
    
    int current_sum = 0;
    int count = 0;
    
    for (int num : nums) {
        current_sum += num;
        
        int dif=current_sum - k;
        // Check if there's a previous prefix sum such that current_sum - k exists
        if (prefix_sum_count.find(dif) != prefix_sum_count.end()) {
            count += prefix_sum_count[current_sum - k];
        }
        
        // Update the hashmap with the current prefix sum
        prefix_sum_count[current_sum]++;
    }
    
    return count;
}
    
};*/