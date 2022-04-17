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
    
    static bool comp(pair<int,int> p1,pair<int,int> p2)
    {
        return p1.second>p2.second;
    }
    
    
    void Solve(TreeNode *root,vector<int> &ino)
    {
        if(root==NULL) return ;
        Solve(root->left,ino);
        ino.push_back(root->val);
        Solve(root->right,ino);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> ino;
        Solve(root,ino);
        unordered_map<int,int> mp;
        for(int i=0;i<ino.size();i++)
        {
            mp[ino[i]]++;
        }
        vector<pair<int,int>> vp;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            vp.push_back({it->first,it->second});
        }
        sort(vp.begin(),vp.end(),comp);
        vector<int> ans;
        int freq=vp[0].second;
        ans.push_back(vp[0].first);
        for(int i=1;i<vp.size();i++)
        {
            if(vp[i].second==freq)
            {
                ans.push_back(vp[i].first);
            }
            else{
                break;
            }
        }
        
        return ans;
    }
};