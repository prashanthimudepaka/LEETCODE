#884. Uncommon Words from Two Sentences
'''
status:easy
A sentence is a string of single-space separated words where each word consists only of lowercase letters.

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.

Example 1:

Input: s1 = "this apple is sweet", s2 = "this apple is sour"

Output: ["sweet","sour"]

Explanation:

The word "sweet" appears only in s1, while the word "sour" appears only in s2.

Example 2:

Input: s1 = "apple apple", s2 = "banana"

Output: ["banana"]
'''
def uncommonFromSentences(s1,s2):
        s1=s1.lower()
        s2=s2.lower()
        s3=s1+" "+s2
        sl=s3.split()
        l=[]
        
        dup=dict()
        for i in range(len(sl)):
            count=1
            for j in sl:
                if sl[i]==j:
                    dup[sl[i]]=count
                    count=count+1
        for key,value in dup.items():
            if value==1:
                l.append(key)
        return l

l=uncommonFromSentences("this apple is sweet", "this apple is sour")
print(l)