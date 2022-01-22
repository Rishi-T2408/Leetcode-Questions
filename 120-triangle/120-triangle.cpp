class Solution {
public:
    int t[1001][1001];
    int Solve(int i,int m,vector<vector<int>> &triangle)
    {
        if(m==(triangle.size()-1))
        {
            if((i+1)<triangle[m].size())
            return min(triangle[m][i],triangle[m][i+1]);
            else{
                return triangle[m][i];
            }
        }
        if(t[m][i]!=-1)
        {
            return t[m][i];
        }
        if((i+1)<triangle[m].size())
        {
            return t[m][i]=min((triangle[m][i]+Solve(i,(m+1),triangle)),(triangle[m][i+1]+Solve((i+1),(m+1),triangle)));
        }
        else{
            return t[m][i]=triangle[m][i]+Solve(i,m+1,triangle);
        }
    }
    int minimumTotal(vector<vector<int>>& triangle) {
       memset(t,-1,sizeof(t));
       int i=0;
       int ans=Solve(0,0,triangle);
       return ans;
    }
};