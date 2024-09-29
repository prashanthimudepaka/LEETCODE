//119. Pascal's Triangle II
//medium:easy
//date:20/09/24
/*given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]
 

Constraints:

0 <= rowIndex <= 33
 

Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?*/


class Solution {
public:
vector<int> getRow(int rowIndex) {
        vector<int>v;
        long long res=1;
        v.push_back(1);
        for(int i=1;i<rowIndex;i++)
    {
            res=res*(rowIndex+1-i);
            res=res/(i);
            v.push_back(res);

            
    }
    if(rowIndex!=0)
     v.push_back(1);
   
    return v;

    }
};//res=rowIndex−i+1/i
//row-col/col--->5*4/1*2  number of digits in num =number of digits in den
    /*method 2
    vector<int> getRow(int rowIndex) {
        vector<int>v;
        long long res=1;
        v.push_back(1);
        for(int i=1;i<rowIndex;i++)
    {
            res=res*(rowIndex+1-i);
            res=res/(i);
            v.push_back(res);

            
    }
    if(rowIndex!=0)
     v.push_back(1);
   
    return v;

    }
};*/
//find in a row in a column what is value
/*


C(row,col)= row!/col!×(row−col)!
​

long long binomialCoeff(int row, int col) {
    long long res = 1;
    if (col > row - col)  // Take advantage of symmetry
        col = row - col;

    for (int i = 0; i < col; ++i) {
        res *= (row - i);
        res /= (i + 1);
    }
    return res;

return res //element at triangle[k][cols]

​
