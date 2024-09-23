
class Solution {
    public static int height(TreeNode node) {
if (node == null) {
   return 0;
}
return Math.max(height(node.left), height(node.right)) + 1;
}

public boolean isBalanced(TreeNode root) {

// Function to check if the binary tree is height-balanced

if (root == null) {
   return true; // An empty tree is balanced
}

// Get the height of the left and right subtrees
int leftHeight = height(root.left);
int rightHeight = height(root.right);

// Check if the current node is balanced
if (Math.abs(leftHeight - rightHeight) > 1) {
return false; // If the difference is greater than 1, the tree is not balanced
}

// Check if the left and right subtrees are balanced
if (!isBalanced(root.left)) {
return false; // If the left subtree is not balanced
}

if (!isBalanced(root.right)) {
return false; // If the right subtree is not balanced
}
return true;
}

}