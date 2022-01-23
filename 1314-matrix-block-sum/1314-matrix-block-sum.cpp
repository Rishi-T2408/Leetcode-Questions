class Solution {
public:
    bool isValid(int i,int j,vector<vector<int>>& mat)
    {
        int r=mat.size();
        int c=mat[0].size();
        if(i<0 || i>=r)
        {
            return false;
        }
        if(j<0 || j>=c)
        {
            return false;
        }
        return true;
    }
    int Fun(vector<vector<int>>& mat,int i,int j,int k)
    {
        int di=i-k;
        int dj=j-k;
        int sum=0;
        while( di <= i+k)
        {
            dj=j-k;
            while( dj <= j+k )
            {
                if(isValid(di,dj,mat))
                {
                    sum+=mat[di][dj];
                }
                dj++;
            }
            di++;
        }
        return sum;
    }
    
    
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>> ans;
        int row=mat.size();
        if(row==0)
        {
            return ans;
        }
        int col=mat[0].size();
        vector<int> v;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                v.push_back(Fun(mat,i,j,k));
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};