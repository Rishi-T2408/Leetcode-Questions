class Solution {
public:
    int t[101][101];
    int Solve(vector<vector<int>>& obs,int m,int n,int i,int j)
    {
        if(i>=m || j>=n)
        {
            return 0;
        }
        
        if(obs[i][j]==1)
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
        int d=Solve(obs,m,n,i+1,j);
        int r=Solve(obs,m,n,i,j+1);
        return t[i][j]=d+r;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int i=0;
        int j=0;
        int m=obs.size();
        if(m==0)
        {
            return 0;
        }
        int n=obs[0].size();
        memset(t,-1,sizeof(t));
        int ans=Solve(obs,m,n,i,j);
        return ans; 
    }
};