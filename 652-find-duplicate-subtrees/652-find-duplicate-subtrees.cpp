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
    vector<TreeNode *> ans;
    map<string,int> mp;
    string Solve(TreeNode *root)
    {
        if(root==NULL)
        {
            return " ";
        }
        string s;
        string l=Solve(root->left);
        string r=Solve(root->right);
        s="("+l+to_string(root->val)+r+")";
        if(mp.find(s)==mp.end())
        {
            mp[s]++;
        }
        else{
            if(mp[s]==1)
            {
                ans.push_back(root);
                mp[s]++;
            }
        }
        return s;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        mp.clear();
        Solve(root);
        return ans;
    }
};