class Solution {
public:
    int t[101][101];
    int Solve(int m,int n,int i,int j)
    {
        if(i>=m || j>=n)
        {
            return 0;
        }
        if(i==(m-1) && j==(n-1))
        {
            return 1;
        }
        if(t[i][j]!=-1)
        {
            return t[i][j];
        }
        int d=Solve(m,n,i+1,j);
        int r=Solve(m,n,i,j+1);
        return t[i][j]=d+r;
    }
    
    int uniquePaths(int m, int n) {
        int i=0;
        int j=0;
        memset(t,-1,sizeof(t));
        int ans=Solve(m,n,i,j);
        return ans; 
    }
};