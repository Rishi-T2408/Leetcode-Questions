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
    TreeNode *p=NULL;
    void Solve(TreeNode* root, int val)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->val==val)
        {
            p=root;
        }
        Solve(root->left,val);
        Solve(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        p=NULL;
         Solve(root,val);
        return p;
    }
};