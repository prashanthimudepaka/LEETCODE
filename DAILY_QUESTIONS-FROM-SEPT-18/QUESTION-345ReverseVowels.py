#345. Reverse Vowels of a String
#status:easy
'''Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.'''

class Solution:
    def reverseVowels(self, s: str) -> str:
        l = list(s)  # Convert string to list of characters
        sv = ['a', 'i', 'o', 'u', 'e', 'A', 'E', 'I', 'O', 'U']
        i = 0
        j = len(l) - 1

        while i < j:
            if l[i] in sv and l[j] in sv:
                # Swap vowels
                l[i], l[j] = l[j], l[i]
                i += 1
                j -= 1
            elif l[i] not in sv:
                i += 1
            elif l[j] not in sv:
                j -= 1

        # Convert list back to string
        result = ''.join(l)
        return result
        