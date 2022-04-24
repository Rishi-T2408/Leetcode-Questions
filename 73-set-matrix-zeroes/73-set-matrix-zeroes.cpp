class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        set<int> s1;
        set<int> s2;
        int n=mat.size();
        if(n==0) return ; 
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0) {
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        for(auto it=s1.begin();it!=s1.end();it++)
        {
            int row=*it;
            for(int i=0;i<m;i++)
            {
                mat[row][i]=0;
            }
        }
        
        for(auto it=s2.begin();it!=s2.end();it++)
        {
            int col=*it;
            for(int j=0;j<n;j++)
            {
                mat[j][col]=0;
            }
        }
    }
};