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
/*
    bool palindrome(vector<int> arr)
    {
        int i = 0, j = arr.size()-1;
        while(i < j)
        {
            if(arr[i] != arr[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        //level order traversal
        //store level and vector in map
        //if any child doesnt exist, then push 0 in vector
        //send that vector in palindrome func
        //if true, continue, else return false

        map<int,vector<int>> m;
        queue<pair<TreeNode*,int>> q;

        if(root)
        {
            q.push({root,0});
            m[0].push_back(root -> val);
        }
        
        while( !q.empty() )
        {
            pair<TreeNode*, int> temp = q.front();
            q.pop();

            if(temp.first -> left)
            {
                q.push({temp.first -> left, temp.second + 1});
                m[temp.second+1].push_back(temp.first -> left -> val);
            }else{
                m[temp.second+1].push_back(-5);
            }

            if(temp.first -> right)
            {
                q.push({temp.first -> right, temp.second + 1});
                m[temp.second+1].push_back(temp.first -> right -> val);
            }else{
                m[temp.second+1].push_back(-5);
            }
        }

        for(int i = 0 ; i < m.size() ; i++)
        {
            vector<int> arr = m[i];
            for(int j= 0 ; j < arr.size() ; j++)
            {
                cout << arr[j] << " " ;
            }
            cout << "\n";

            bool check = palindrome(arr);
            if(!check)
                return false;

        }
        return true;   
    }
    */

    //USING RECURSION
    bool isSymmetric(TreeNode* root) 
    {
        if(!root)
            return true;
        
        return symmetry(root -> left, root -> right);
    }

    bool symmetry(TreeNode* root1, TreeNode* root2)
    {
        if(!root1 && !root2)    //means root does not have left and right children
            return true;
        if(!root1 || !root2)   //means root has 1 child (left or right)
            return false;
        
        if(root1 -> val != root2 -> val)
            return false;
        
        return symmetry(root1->left, root2->right) && symmetry(root1->right, root2->left);
    }
};