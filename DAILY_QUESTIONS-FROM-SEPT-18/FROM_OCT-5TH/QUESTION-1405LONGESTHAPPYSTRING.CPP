// 1405. Longest Happy String
//https://leetcode.com/problems/longest-happy-string/?envType=daily-question&envId=2024-10-16
//DATE: 17/10/24
/*


A string s is called happy if it satisfies the following conditions:

s only contains the letters 'a', 'b', and 'c'.
s does not contain any of "aaa", "bbb", or "ccc" as a substring.
s contains at most a occurrences of the letter 'a'.
s contains at most b occurrences of the letter 'b'.
s contains at most c occurrences of the letter 'c'.
Given three integers a, b, and c, return the longest possible happy string. If there are multiple longest happy strings, return any of them. If there is no such string, return the empty string "".

A substring is a contiguous sequence of characters within a string.

 

Example 1:

Input: a = 1, b = 1, c = 7
Output: "ccaccbcc"
Explanation: "ccbccacc" would also be a correct answer.
Example 2:

Input: a = 7, b = 1, c = 0
Output: "aabaa"
Explanation: It is the only correct answer in this case. */

//https://www.youtube.com/watch?v=MfXKD9flyZ4

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res;
        priority_queue<pair<int,char>> maxheap;
        if(a>0) maxheap.push({a,'a'});
        if(b>0) maxheap.push({b,'b'});
        if(c>0) maxheap.push({c,'c'});
        while(!maxheap.empty())
        {
            auto [count,character]=maxheap.top();
            maxheap.pop();//inorder to go to next character count after one iteration
            int n=res.size();
            if(n>=2 and res[n-1]==character and res[n-2]==character)//check if there are three consecutuve characters
            {
                    if(maxheap.empty())
                    break;//if u dont have next character in maxheap end it

                auto [nextCount,nextChar]=maxheap.top();
                maxheap.pop();//take the next character if count exceed 3
                res.push_back(nextChar);
                nextCount--;
                if(nextCount>0)
                    maxheap.push({nextCount,nextChar});
            }
            else
            {
                count--;
                res.push_back(character);
            }
            if(count>0)
            {
                maxheap.push({count,character});
            }
            
        }
        return res;



    }
};