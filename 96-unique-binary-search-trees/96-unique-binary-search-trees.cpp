class Solution {
public:
    int t[20];
    int Solve(int n)
    {
        if(n<=1)
        {
            return 1;
        }
        if(t[n]!=-1)
        {
            return t[n];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=Solve(i)*Solve(n-i-1);
        }
        return t[n]=ans;
    }
    
    int numTrees(int n) {
        //I have seen an 
        memset(t,-1,sizeof(t));
        int ans=Solve(n);
        return ans;
    }
};