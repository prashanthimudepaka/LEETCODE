#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int takeCharacters(string s, int k) {
        // Total counts
        map<char, int> count;
        for (char c : s) {
            count[c]++;
        }

        // Check if any character has less than k occurrences
        if (min({count['a'], count['b'], count['c']}) < k) {
            return -1;
        }

        // Sliding Window
        int res = INT_MAX;
        int l = 0;
        for (int r = 0; r < s.length(); r++) {
            count[s[r]]--;

            while (min({count['a'], count['b'], count['c']}) < k) {
                count[s[l]]++;
                l++;
            }
            res = min(res, static_cast<int>(s.length()) - (r - l + 1));
        }
        return res;
    }
};

int main() {
    Solution solution;
    string s = "aabaaaacaabc";
    int k = 2;
    cout << "Result: " << solution.takeCharacters(s, k) << endl;
    return 0;
}
