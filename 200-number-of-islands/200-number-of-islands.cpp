class Solution {
public:
    void DFS(vector<vector<char>>& grid,vector<vector<int>> &vis,int i,int j,int n,int m)
    {
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]=='0' || vis[i][j]==1)
        {
            return ;
        }
        vis[i][j]=1;
        DFS(grid,vis,i+1,j,n,m);
        DFS(grid,vis,i-1,j,n,m);
        DFS(grid,vis,i,j+1,n,m);
        DFS(grid,vis,i,j-1,n,m);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(n==0) return 0;
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;  //Number of connected components nikaalne hai
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    cnt++;
                    DFS(grid,vis,i,j,n,m);
                }   
            }
        }
        return cnt;
    }
};