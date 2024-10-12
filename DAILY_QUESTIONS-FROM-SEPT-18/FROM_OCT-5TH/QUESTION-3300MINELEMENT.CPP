//3300. Minimum Element After Replacement With Digit Sum
//STATUS: EASY
//DATE:12-10-24
//https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/
class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int rem=0;
            int temp=nums[i];
            while(temp!=0)
            {
                rem=temp%10;
                sum+=rem;
                temp=temp/10;
            }
            nums[i]=sum;
        }
        int min=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(min>nums[i])
            min=nums[i];
        }
        // int m=*min_element(nums.begin(),nums.end());
        return min;
    }
};