// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    // Topological sort using BFS 
	    vector<int> ino(n,0);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<adj[i].size();j++)
	        {
	            ino[adj[i][j]]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0;i<n;i++) if(ino[i]==0) q.push(i);
	    vector<int> ans;
	    while(!q.empty())
	    {
	        int curr=q.front();
	        ans.push_back(curr);
	        q.pop();
	        for(int i=0;i<adj[curr].size();i++)
	        {
	            int child=adj[curr][i];
	            ino[child]--;
	            if(ino[child]==0)
	            {
	                q.push(child);
	            }
	        }
	    }
	    
	    return ans;
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends