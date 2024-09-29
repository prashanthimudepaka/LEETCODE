#118. Pascal's Triangle
#EASY 22-09-24

'''Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 

Constraints:

1 <= numRows <= 30'''

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
            {
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
    }
};

class Solution(object):
    def generate(self, numRows):
        l = [[0, 1, 0]]
        seen = set(tuple(sub) for sub in l)  # Track seen rows

        while len(l) < numRows:
            new_rows = []  # Temporarily store new rows
            for sub in l:
                s = []
                s.append(0)
                for j in range(len(sub) - 1):
                    s.append(sub[j] + sub[j + 1])
                s.append(0)

                # Convert to tuple for set operations
                s_tuple = tuple(s)

                # Check if the new numRows is already seen
                if s_tuple not in seen:
                    new_rows.append(s)
                    seen.add(s_tuple)  # Add the new numRows to the seen set

            l.extend(new_rows)  # Extend l with the unique new rows
        l = [[elem for elem in sub if elem != 0] for sub in l]
        return l
        