
class Solution {
    public int maxDepth(TreeNode root) {
        if(root==null)
        return 0;
        else{
            int lef=maxDepth(root.left);
            int rig=maxDepth(root.right);
            return Math.max(lef,rig)+1;
        }
    }
}