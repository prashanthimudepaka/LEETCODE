//3309. Maximum Possible Number by Binary Concatenation
//DATE: 13-10-24
//STATUS:MEDIUM
/*

You are given an array of integers nums of size 3.

Return the maximum possible number whose binary representation can be formed by concatenating the binary representation of all elements in nums in some order.

Note that the binary representation of any number does not contain leading zeros.

 

Example 1:

Input: nums = [1,2,3]

Output: 30

Explanation:

Concatenate the numbers in the order [3, 1, 2] to get the result "11110", which is the binary representation of 30.

Example 2:

Input: nums = [2,8,16]

Output: 1296

Explanation:

Concatenate the numbers in the order [2, 8, 16] to get the result "10100010000", which is the binary representation of 1296.

 

Constraints:

nums.length == 3
1 <= nums[i] <= 127
*/ 
class Solution {
public:
    int deci(string s)
    {
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            res=res*2 +(s[i]-'0');
        }
        return res;
    }
    string bini(int n)
    {
        string res="";
        while(n)
        {
            res+='0'+n%2;
            n/=2;
        }
        reverse(res.begin(),res.end());

        return res;
    }
    int maxGoodNumber(vector<int>& nums) {
        string a=bini(nums[0]);
        string b=bini(nums[1]);
        string c=bini(nums[2]);
        int m=max({deci(a+b+c),
            deci(a+c+b),
            deci(b+a+c),
            deci(b+c+a),
            deci(c+a+b),
            deci(c+b+a)
    });
      return m;
    }
  
};