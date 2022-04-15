class NumMatrix {
public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int j=1;
        while(j<m)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][j]=matrix[i][j]+matrix[i][j-1];
            }
            j++;
        }
        
        int i=1;
        while(i<n)
        {
            for(int j=0;j<m;j++)
            {
                matrix[i][j]=matrix[i][j]+matrix[i-1][j];
            }
            i++;
        }
        
        mat=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=mat[row2][col2];
        if(row1>0)
        {
            sum-=mat[row1-1][col2];
        }
        if(col1>0)
        {
            sum-=mat[row2][col1-1];
        }
        if(row1>0 && col1>0)
        {
            sum+=mat[row1-1][col1-1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */