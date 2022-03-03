// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void Helper(vector<vector<int>> &mat,int i,int j,pair<int,int> &p,string dir,int n,int m)
    {
        if(mat[i][j]==0)
        {
            if(dir=="R")
            {
                if((j+1)>=m)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i,j+1,p,dir,n,m);
                }
            }
            if(dir=="L")
            {
                if((j-1)<0)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i,j-1,p,dir,n,m);
                }
            }
            if(dir=="D")
            {
                if((i+1)>=n)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i+1,j,p,dir,n,m);
                }
            }
            if(dir=="U")
            {
                if((i-1)<0)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i-1,j,p,dir,n,m);
                }
            }
        }
        else{
            mat[i][j]=0;
            if(dir=="U") dir="R";
            else if(dir=="R") dir="D";
            else if(dir=="D") dir="L";
            else dir="U";
            
            if(dir=="R")
            {
                if((j+1)>=m)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i,j+1,p,dir,n,m);
                }
            }
            if(dir=="L")
            {
                if((j-1)<0)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i,j-1,p,dir,n,m);
                }
            }
            if(dir=="D")
            {
                if((i+1)>=n)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i+1,j,p,dir,n,m);
                }
            }
            if(dir=="U")
            {
                if((i-1)<0)
                {
                    p.first=i;
                    p.second=j;
                    return ;
                }
                else{
                    Helper(mat,i-1,j,p,dir,n,m);
                }
            }
        }
    }
    pair<int,int> endPoints(vector<vector<int>> mat){
        //code here
        int i=0;
        int j=0;
        int n=mat.size();
        pair<int,int> p;
        if(n==0) return p;
        int m=mat[0].size();
        Helper(mat,i,j,p,"R",n,m);
        return p;
    }

};

// { Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}  // } Driver Code Ends