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
    void Solve(TreeNode *root,vector<int> &ino)
    {
        if(root==NULL) return ;
        Solve(root->left,ino);
        ino.push_back(root->val);
        Solve(root->right,ino);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ino;
        Solve(root,ino);
        return ino[k-1];
    }
};