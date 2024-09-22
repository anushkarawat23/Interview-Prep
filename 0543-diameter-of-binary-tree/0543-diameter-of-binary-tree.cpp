/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getHeight(TreeNode* root)
    {
        if(!root)
            return 0;
        int l = 1 + getHeight(root -> left);
        int r = 1 + getHeight(root -> right);
        return max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(!root)
            return 0;

        int lefth = getHeight(root -> left);
        int righth = getHeight(root -> right);

        int rootDiameter = lefth + righth;
//to account for cases where diameter does not pass through the root i.e.
//it lies entirely either on left subtree or right subtree
        int leftRootD = diameterOfBinaryTree(root -> left);
        int rightRootD = diameterOfBinaryTree(root -> right);

        return max(rootDiameter, max(leftRootD, rightRootD));

    }
};