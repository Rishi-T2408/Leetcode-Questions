// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool Check(vector<int> graph[],int curr,vector<int> &vis)
    {
       
        vis[curr]=1;
        for(int i=0;i<graph[curr].size();i++)
        {
            int child=graph[curr][i];
            if(vis[child]==0)
            {
                if(Check(graph,child,vis))
                return true;
            }
            else{
                if(vis[child]==1)
                {
                    return true;
                }
            }
        }
        vis[curr]=2;
        return false;
    }
    
    bool isCyclic(int n, vector<int> graph[]) {
        // code here
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                if(Check(graph,i,vis)) return true;
            }
        }
        
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends