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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        q.push(root);
        vector<int> v;
        if(root==NULL) return ans;
        v.push_back(root->val);
        ans.push_back(v);
        while(!q.empty())
        {
            int n=q.size();
            v.clear();
            while(n!=0)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left!=NULL)
                {
                    v.push_back(curr->left->val);
                    q.push(curr->left);
                }
                if(curr->right!=NULL)
                {
                    v.push_back(curr->right->val);
                    q.push(curr->right);
                }
                n--;
            }
            if(v.size()!=0)
            ans.push_back(v);
        }
        v.clear();
        return ans;
    }
};