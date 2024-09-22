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
        if( !root )
            return 0;
        int l = 1 + getHeight(root->left);
        int r = 1 + getHeight(root->right);
        return max(l,r);
    }

    bool isBalanced(TreeNode *root){
    	//heights of the 2 child subtrees of any node differ by at most 1
        
        if(!root)
            return true;
        int lefth = getHeight(root->left);
        int righth = getHeight(root->right);

//checking diff and checking each subtree (not just the current)
        if(abs(righth - lefth) <= 1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        
        return false;
    }
};