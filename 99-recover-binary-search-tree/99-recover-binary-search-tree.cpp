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
    TreeNode *first,*last,*prev;
    
    void Solve(TreeNode *root)
    {
        if(root==NULL) return ;
        Solve(root->left);  //This thing is done like an inorder only so like that only we are detecting the error
        if(prev!=NULL && prev->val>root->val)
        {
            if(first==NULL)
            {
                first=prev;
                last=root;
            }
            else last=root;
        }
        prev=root;
        Solve(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        first=NULL;
        last=NULL;
        prev=NULL;
        Solve(root);
        swap(first->val,last->val);
    }
};