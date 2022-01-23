class Solution {
public:
    vector<int> Solve(int n,vector<vector<int>> &ans)
    {
        vector<int> v;
        if(n==1)
        {
            v.push_back(1);
            ans.push_back(v);
            return v;
        }
        v=Solve(n-1,ans);
        vector<int> vec(n,0);
        vec[0]=1;
        vec[n-1]=1;
        for(int i=1;i<n-1;i++)
        {
            vec[i]=v[i-1]+v[i];
        }
        ans.push_back(vec);
        return vec;
        
    }
    
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        Solve(n,ans);
        return ans;
    }
};