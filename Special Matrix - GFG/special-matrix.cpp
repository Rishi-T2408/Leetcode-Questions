// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    int Ways(int i,int j,int n,int m,map<pair<int,int>,int> &bc,vector<vector<int>> &dp,const int &mod)
    {
        if(bc[{i,j}]!=0)
        {
            return dp[i][j]=0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j]%mod;
        }
        if(i==n && j==m)
        {
            return dp[i][j]=1%mod;
        }
        int r=0,d=0;
        if((i+1)<=n && bc[{i+1,j}]==0)
        {
            d=Ways(i+1,j,n,m,bc,dp,mod)%mod;
        }
        if((j+1)<=m && bc[{i,j+1}]==0)
        {
            r=Ways(i,j+1,n,m,bc,dp,mod)%mod;
        }
        return dp[i][j]=(r+d)%mod;
        
    }
	int FindWays(int n, int m, vector<vector<int>> bcell){
	    int i=1;
	    int j=1;
	    const int mod=1e9+7; 
	    map<pair<int,int>,int> bc;
	    for(int i=0;i<bcell.size();i++)
	    {
	        bc[{bcell[i][0],bcell[i][1]}]++;
	    }
	    vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
	    int ans=Ways(1,1,n,m,bc,dp,mod);
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>>blocked_cells;
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			blocked_cells.push_back({x, y});
		}
		Solution obj;
		int ans = obj.FindWays(n, m, blocked_cells);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends