//14. Longest Common Prefix
//DATE: 14-10-24
//STATUS MEDIUM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          if (strs.empty()) return ""; // If the input vector is empty
    
    string prefix = strs[0]; // Assume the first string is the prefix
    
    for (int i = 1; i < strs.size(); ++i) {
        while (strs[i].find(prefix) != 0) { // Check if the prefix is not found at the start of strs[i]
            prefix = prefix.substr(0, prefix.size() - 1); // Reduce the prefix by one character
            if (prefix.empty()) return ""; // If the prefix becomes empty, return ""
        }
    }
    
    return prefix; 
    }
};