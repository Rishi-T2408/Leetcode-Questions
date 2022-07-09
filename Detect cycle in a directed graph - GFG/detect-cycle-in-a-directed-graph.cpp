// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int n, vector<int> adj[]) {
        // code here
        vector<int> in(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                in[adj[i][j]]++;   
            }
        }
        queue<int> q;
        for(int i=0;i<n;i++) if(in[i]==0) q.push(i);
        if(q.empty()) return true; //No topological sort possible so cyclic graph cycle is present
        
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(int i=0;i<adj[curr].size();i++)
            {
                int child=adj[curr][i];
                in[child]--;
                if(in[child]==0)
                {
                    q.push(child);
                }
                if(q.size()==0)
                {
                    return true; //As no indegree node after an node is connected to cycle so here child is involved in cycle so indegree will be non 0 
                }
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