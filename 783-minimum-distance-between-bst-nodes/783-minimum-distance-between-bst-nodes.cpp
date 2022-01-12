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
    void Solve(TreeNode *root,vector<int> &v)
    {
        if(root==NULL)
        {
            return ;
        }
        Solve(root->left,v);
        v.push_back(root->val);
        Solve(root->right,v);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        Solve(root,v);
        int min=INT_MAX;
        for(int i=0;i<v.size()-1;i++)
        {
            if((v[i+1]-v[i])<min)
            {
                min=(v[i+1]-v[i]);
            }
        }
        return min;
    }
};