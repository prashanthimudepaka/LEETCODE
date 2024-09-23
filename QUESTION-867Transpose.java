
class Solution {
    public int[][] transpose(int[][] matrix) {
        int[][] trans=new int[matrix[0].length][matrix.length];
        for(int i=0;i<matrix.length;i++)
        {
            for(int j=0;j<matrix[0].length;j++)
            {
                trans[j][i]=matrix[i][j];

            }
         
        }
    return trans;
    }

}
/* 
# matrix = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]
# ]

# # Get the number of rows and columns
# rows = len(matrix)
# cols = len(matrix[0])

# # Initialize the transposed matrix with the correct dimensions (cols x rows)
# transpose = []

# # Loop through each column index
# for i in range(cols):
#     # Create a new row for the transposed matrix
#     new_row = []
    
#     # Loop through each row of the original matrix
#     for j in range(rows):
#         # Append the element from the j-th row and i-th column to the new row
#         new_row.append(matrix[j][i])
    
#     # Append the new row to the transposed matrix
#     transpose.append(new_row)

# # Print the transposed matrix
# for row in transpose:
#     print(row)*/