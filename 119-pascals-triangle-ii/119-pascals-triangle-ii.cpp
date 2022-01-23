class Solution {
public:

    vector<int> Solve(int n)
    {
        vector<int> v;
        if(n==1)
        {
            v.push_back(1);
            return v;
        }
        vector<int> v1=Solve((n-1));
        for(int i=0;i<n;i++)
        {
            if(i==0 || i==(n-1))
            {
                v.push_back(1);
            }
            else{
            v.push_back((v1[i-1]+v1[i]));
            }
        }
        return v;
    }
    vector<int> getRow(int n) {
        vector<int> ans;
        ans=Solve(n+1);
        return ans;
    }
};