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
    string s;
    string Solve(TreeNode *root)
    {
        if(root==NULL)
        {
            return "";
        }
        s.clear();
        string l=Solve(root->left);
        string r=Solve(root->right);
        if(root->left==NULL && root->right==NULL)
        {
            s=to_string(root->val);
        }
        else if(root->left!=NULL && root->right==NULL)
        {
            s=to_string(root->val)+"("+l+")";
        }
        else if(root->left==NULL && root->right!=NULL)
        {
            s=to_string(root->val)+"()"+"("+r+")";
        }
        else{
            s=to_string(root->val)+"("+l+")"+"("+r+")";
        }
        return s;
    }
    
    string tree2str(TreeNode* root) {
        s.clear();
        Solve(root);
        return s;
    }
};