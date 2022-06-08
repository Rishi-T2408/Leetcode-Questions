class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int key) {
        int n=mat.size();
        if(n==0) return false;
        int m=mat[0].size();
        int i=0;
        int j=m-1;
        while(i<n && j>=0)
        {
            if(mat[i][j]==key) return true;
            if(mat[i][j]>key) j--;
            else i++;
        }
        return false;
    }
};