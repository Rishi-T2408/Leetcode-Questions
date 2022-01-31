class Solution {
public:
    int dp[60];
    int Solve(int n)
    {
        if(n<=1)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int ans=1;
        for(int i=1;i<=n;i++)
        {
            int pro=i*Solve(n-i);
            ans=max(ans,pro);
        }
        return dp[n]=ans;
    }
    int integerBreak(int n) {
       if(n==2)
       {
           return 1;
       }
       if(n==3)
       {
           return 2;
       }
       memset(dp,-1,sizeof(dp));
       int ans=Solve(n);
       return ans;
    }
};