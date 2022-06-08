class Solution {
public:
    bool Solve(vector<int> &arr,int l,int r,int key)
    {
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]==key) return true;
            if(arr[mid]>key) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& mat, int key) {
        int n=mat.size();
        if(n==0) return false;
        int m=mat[0].size();
        int i=0;
        while(i<n && key>mat[i][m-1]) i++;
        bool ans;
        if(i<n)
        ans=Solve(mat[i],0,m-1,key);
        else return false;
        return ans;
    }
};