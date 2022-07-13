// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    void DFS(vector<int> &vis,vector<int> adj[],int curr,int c,int d)
    {
        vis[curr]=1;
        for(auto it: adj[curr])
        {
            if(!vis[it] && (curr!=c || it!=d))
            {
                DFS(vis,adj,it,c,d);
            }
        }
    }
    int isBridge(int n, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<int> vis(n,0);
        DFS(vis,adj,c,c,d);
        if(vis[d]==1) return 0;  //App uss edge ko htake bhi ekhh se dusri jagah jaapre hai tohh cycle se hi aaisa hooparha hai agrr vohh bridge hoota tohh uske htne se cc incerase hoota aur cse d kabhi nhi jaapate
        return 1;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends