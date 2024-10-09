//229. Majority Element II
//STATUS: MEDIUM
/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109 */
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int count=0;
      vector<int> ans;
      map<int,int> mp;
      for(auto i : nums)
      {
            mp[i]++;
      }  
        for(auto i : mp)
        {
            if(i.second>nums.size()/3)
            {
                ans.push_back(i.first);
            }
        }

      return ans; 
    }
};