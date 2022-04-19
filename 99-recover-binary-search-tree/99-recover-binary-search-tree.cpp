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
    int k=0;
    void Solve(TreeNode *root,vector<int> &ino)
    {
        if(root==NULL) return ;
        Solve(root->left,ino);
        ino.push_back(root->val);
        Solve(root->right,ino);
    }
    
    void Swap(TreeNode *root,vector<int> &v)
    {
        if(root==NULL) return ;
        Swap(root->left,v);
        if(root->val!=v[k])
        {
            swap(root->val,v[k++]);
        }
        else{
            k++;
        }
        Swap(root->right,v);
    }
    
    void recoverTree(TreeNode* root) {
        vector<int> ino;
        Solve(root,ino);
        sort(ino.begin(),ino.end());
        Swap(root,ino);
    }
};