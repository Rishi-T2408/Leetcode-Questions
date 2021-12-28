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
    void Solve(TreeNode *root,string str,vector<string> &Ans)
    {
        if(root==NULL)
        {
            return ;
        }
        int n=str.size();
        if(root->left==NULL && root->right==NULL)
        {
            str.insert(n,to_string(root->val));
            Ans.push_back(str);
            str.pop_back();
            return ;
        }
        str.insert(n,to_string(root->val));
        str.push_back('-');
        str.push_back('>');
        Solve(root->left,str,Ans);
        Solve(root->right,str,Ans);
        str.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> Ans;
       if(root==NULL)
        {
            return Ans;
        }
        string str;
        Solve(root,str,Ans);
       
        return Ans;
    }
};