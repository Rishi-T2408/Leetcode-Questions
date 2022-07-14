// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    vector<int> nums(n,197);
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
	        if(flag==false)
	        {
	            return false; //Kyoki negative weight nhi hai isliye changr nhi aaya and two iterations are same
	        }
	    }
	    //n iterations mai bhi change aate gya then pakka negative weight hai
	    return true;
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