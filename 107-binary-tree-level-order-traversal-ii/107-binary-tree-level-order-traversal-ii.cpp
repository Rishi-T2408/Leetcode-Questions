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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        vector<int> v;
        queue<TreeNode *> q;
        q.push(root);
        TreeNode *curr;
        while(!q.empty())
        {
            int n=q.size();
            while(n>0)
            {
                curr=q.front();
                v.push_back(curr->val);
                q.pop();
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
                n--;
            }
            ans.push_back(v);
            v.clear();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};