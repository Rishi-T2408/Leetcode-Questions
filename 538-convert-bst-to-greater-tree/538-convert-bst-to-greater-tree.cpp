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
    void Solve(TreeNode *root,int &temp)
    {
        if(root==NULL) return ;
        Solve(root->right,temp);
        temp+=root->val;
        root->val=temp;
        Solve(root->left,temp);
    }
    TreeNode* convertBST(TreeNode* root) {
        int temp=0;
        Solve(root,temp);
        return root;
    }
};