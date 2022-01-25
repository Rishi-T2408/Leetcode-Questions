class Solution {
public:
    int t[201][201];
    int Solve(int i,int j,int m,int n,vector<vector<int>>& grid)
    {
        if(i>=m || j>=n)
        {
            return INT_MAX;
        }
        if(t[i][j]!=-1)
        {
            return t[i][j];
        }
        if(i==(m-1) && j==(n-1))
        {
            return grid[i][j];
        }
        int d=Solve(i+1,j,m,n,grid);
        int r=Solve(i,j+1,m,n,grid);
        return t[i][j]=min(d,r)+grid[i][j];
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        int i=0;
        int j=0;
        int m=grid.size();
        if(m==0)
        {
            return 0;
        }
        int n=grid[0].size();
        int ans=INT_MAX;
        memset(t,-1,sizeof(t));
        ans=Solve(i,j,m,n,grid);
        return ans;
    }
};