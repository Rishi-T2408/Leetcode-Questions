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
    
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        Solve(root,v);
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(i+1<n && v[i]==v[i+1])
            {
                return false;
            }
        }
        return is_sorted(v.begin(),v.end());
    }
};