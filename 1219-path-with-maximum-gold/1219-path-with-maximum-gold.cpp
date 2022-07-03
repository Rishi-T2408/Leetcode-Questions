class Solution {
public:
    int Solve(vector<vector<int>> &mat,vector<vector<int>> &vis,int i,int j,int n,int m)
    {
        if((i<0) || (i>=n) || (j<0) || (j>=m) || mat[i][j]==0 || vis[i][j]==1)
        {
            return 0;
        }
        vis[i][j]=1;
        int ans1=Solve(mat,vis,i+1,j,n,m);
        int ans2=Solve(mat,vis,i-1,j,n,m);
        int ans3=Solve(mat,vis,i,j+1,n,m);
        int ans4=Solve(mat,vis,i,j-1,n,m); 
         
        vis[i][j]=0;
        
      
        return (mat[i][j]+max({ans1,ans2,ans3,ans4}));
        
    }
    
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        if(n==0) return 0;
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                {
                   ans=max(ans,Solve(grid,vis,i,j,n,m));
                }
            }
        }
        
       
        if(ans==INT_MIN) return 0;
        return ans;
    }
};