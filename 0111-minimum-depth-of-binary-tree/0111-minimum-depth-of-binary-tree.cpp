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
    int minDepth(TreeNode* root) {

        //BFS
        //upar se level by level traversal start karenge
        //jese hee leaf node mila,  vese hee return

        queue<TreeNode*> que;

        if(!root)
            return 0;
        
        int level = 1;
        que.push(root);

        while(!que.empty())
        {
            int n = que.size();
            while(n--)
            {
                TreeNode* temp = que.front();
                que.pop();
                if(!temp -> left && !temp -> right)
                    return level;
                if(temp -> left)
                    que.push(temp -> left);
                if(temp -> right)
                    que.push(temp -> right);
            }
            level++;
        }

        return level;


        
    }
};