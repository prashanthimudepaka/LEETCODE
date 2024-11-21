//https://youtu.be/YDzytGV2Z5M?si=51B4wM4BskaUUXVl
//https://leetcode.com/problems/maximum-swap/?envType=daily-question&envId=2024-10-17
/*
DATE: 18-10-24
STATUS: MEDIUM(DAILY CHALLENGE)
You are given an integer num. You can swap two digits at most once to get the maximum valued number.

Return the maximum valued number you can get.

 
Example 1:

Input: num = 2736
Output: 7236
Explanation: Swap the number 2 and the number 7.
Example 2:

Input: num = 9973
Output: 9973
Explanation: No swap.
 

Constraints:

0 <= num <= 108 */
class Solution {
public:
    int maximumSwap(int num) {

        if(num<=10) return num;
        string s = to_string(num);
        int n=s.size();
        int max_ind=n-1;
        int l=-1;
        int r=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]>s[max_ind])
            {
                max_ind=i;
            }
            else if(s[i]<s[max_ind])
            {   r=max_ind;
                l=i;
            }
        }
        if(l!=-1)
        {
            swap(s[l],s[r]);
        }
        return stoi(s);
/*         string s = to_string(num);
      
         char max_digit = *max_element(s.begin(), s.end());
         if(*s.begin()!=max_digit){
          s.erase(remove(s.begin(), s.end(), max_digit), s.end());
           
           s.insert(s.begin(), max_digit);
         }
         s.erase(remove(s.begin(), s.end(), max_digit), s.end());
         

          int number = std::stoi(s);
          return number;*/
    }
};