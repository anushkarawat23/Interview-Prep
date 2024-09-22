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
    int maxDepth(TreeNode* root) 
    {
        int lefth = 1, righth = 1;
        if( !root )
            return 0;
        if(root -> left)
            lefth = 1 + maxDepth(root -> left);
        if(root -> right)
            righth = 1 + maxDepth(root -> right);
        
        return max(lefth, righth);
        
    }


























    
};