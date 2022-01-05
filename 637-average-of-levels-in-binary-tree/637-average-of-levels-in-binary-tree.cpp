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
    
    double Fun(vector<int> v)
    {
        double sum=0;
        double n=v.size();
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        return (sum/n);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> ans;
        vector<double> Ans;
        if(root==NULL)
        {
            return Ans;
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

        for(int i=0;i<ans.size();i++)
        {
            Ans.push_back(Fun(ans[i]));
        }
        return Ans;
    }
};