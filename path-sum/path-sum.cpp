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
    bool ans=false;
    void Solve(TreeNode *root,int sum)
    {
        if(root->left==NULL && root->right==NULL)
        {
            sum-=root->val;
            if(sum==0)
            {
                ans=true;
            }
            return ;
        }
        sum-=(root->val);
        if(root->left)
        { 
            Solve(root->left,sum);
        }
        if(root->right)
        {
            Solve(root->right,sum);
        }
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return false;
        }
        Solve(root,targetSum);
        return ans;
    }
};