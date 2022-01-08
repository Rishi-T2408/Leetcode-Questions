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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *p=root,*q=NULL;
        if(root==NULL)
        {
            TreeNode *temp=new TreeNode(val);
            return temp;
        }
        while(p!=NULL)
        {
            if(p->val==val)
            {
                break;
            }
            else if(val>p->val)
            {
                q=p;
                p=p->right;
            }
            else if(val<p->val)
            {
                q=p;
                p=p->left;
            }
        }
        if(p!=NULL)
        {
            return root;
        }
        else{
            TreeNode *temp=new TreeNode(val);
            if(q->val<val)
            {
                q->right=temp;
            }
            else{
                q->left=temp;
            }
        }
        return root;
    }
};