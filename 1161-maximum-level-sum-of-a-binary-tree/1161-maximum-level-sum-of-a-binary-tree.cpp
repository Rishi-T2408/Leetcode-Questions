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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        vector<int> v;
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
        int max=INT_MIN;
        int k=-1;
        for(int i=0;i<ans.size();i++)
        {
            int sum=0;
            for(int j=0;j<ans[i].size();j++)
            {
                sum+=ans[i][j];
            }
            if(sum>max)
            {
                max=sum;
                k=i;
            }
        }
        return k+1;
    }
};