// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    //For finding there is an negative weight cycle in an graph or not we will use Bellman form algorithm result it will give SSSP 
	    //in (n-1) iterations and if no two iterations is same then negative weight cyclr
	    vector<int> nums(n,1e7);
	    nums[0]=0;
	    bool flag=false;
	    while(n--)
	    {
	        flag=false;
	        for(int i=0;i<edges.size();i++)
	        {
	            int u=edges[i][0];
	            int v=edges[i][1];
	            int wt=edges[i][2];
	            if((nums[u]+wt)<nums[v])
	            {
	                flag=true;
	                nums[v]=(nums[u]+wt); //Means the path from u to v will assign v lesser SSSP
	            }
	        }
	      
	    }
	    //n iterations mai bhi change aate gya then pakka negative weight hai
	     return (flag==true)?1:0;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			edges.push_back({x,y,z});
		}
		Solution obj;
		int ans = obj.isNegativeWeightCycle(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends