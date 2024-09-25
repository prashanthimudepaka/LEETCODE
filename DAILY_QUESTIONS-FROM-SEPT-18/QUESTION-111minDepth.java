/*
111. Minimum Depth of Binary Tree
status:easy/not own
date:23/09/24
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.
 Example 1:
    3
9       20
      15   7
      input:{root,left,right
      left.left,right
      right.left,right}
Input: root = [3,9,20,null,null,15,7]
Output: 2
Example 2:

Input: root = [2,null,3,null,4,null,5,null,6]
2
    3
        4
            5
                6
Output: 5
 * 
 * 
 * 
 */
  public class minDepth {
      int val;
      minDepth left;
      minDepth right;
      minDepth() {}
      minDepth(int val) { this.val = val; }
      minDepth(int val, minDepth left, minDepth right) {
          this.val = val;
          this.left = left;
          this.right = right;
      }
  }
class Solution {
    public int minDepth(minDepth root) {
        if(root==null)
        return 0;
        // Base case : Leaf Node. This accounts for height = 1.
        if (root.left == null && root.right == null)
            return 1;
 
        // If left subtree is NULL, recur for right subtree
        if (root.left == null)
            return minDepth(root.right) + 1;
 
      if (root.right == null)
            return minDepth(root.left) + 1;
 
        return Math.min(minDepth(root.left),
                        minDepth(root.right)) + 1;
    
     
        
    }
    public static void main(String args[])
    {   minDepth root=null;
        Solution ss=new Solution();
        System.out.print(ss.minDepth(root));
    }
}