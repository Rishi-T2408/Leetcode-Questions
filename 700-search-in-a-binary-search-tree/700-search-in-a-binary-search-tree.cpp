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
class Solution {   //Recursion way
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *p=NULL;
        while(root!=NULL)
        {
            if(val>root->val)
            {
                root=root->right;
            }
            else if(val==root->val)
            {
                p=root;
                break;
            }
            else if(val<root->val)
            {
                root=root->left;
            }
        }
        return p;
    }
};