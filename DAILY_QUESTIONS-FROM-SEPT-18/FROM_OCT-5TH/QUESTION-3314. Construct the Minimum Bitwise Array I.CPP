//3314. Construct the Minimum Bitwise Array I
//DATE: 16-10-24
//status medium(contest)
//https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/description/

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for(auto i: nums)
        {
            if(i==2)
            {
                ans.push_back(-1);
                continue;
            }
            for(int j=1;j<i;j++)
            {
                if((j|(j+1))==i)
                    {
                        ans.push_back(j);
                        break;
                    
                    }
            }
        }
            return ans;



    }
};
