    //3223. Minimum Length of String After Operations
    #include<bits/stdc++.h>
    using namespace std;
    class Solution {
    public:
        int minimumLength(string s) {
            unordered_map<char,int> mp;
            int ans=0;
            for (auto c : s) {
            // If character is not in map, initialize to 1
            if (mp.find(c) == mp.end()) {
                mp[c] = 1;  //  setting count to 1 for the first occurrence
            }
            else {
                mp[c] = mp[c] + 1;  //  incrementing count for subsequent occurrences
            }
        }
        /*easy way for grabbing count of each letter is :
        for(char c:s)
        {
            mp[c]++;
        }

        */   for(auto c : mp)
            {
                int count=c.second;
                while(count>=3)
                {
                    count=count-2;
                }
                ans=ans+count;

            }
        return ans;
        }
    };