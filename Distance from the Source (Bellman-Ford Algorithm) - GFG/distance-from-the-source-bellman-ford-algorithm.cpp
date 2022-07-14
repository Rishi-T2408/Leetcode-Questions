// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int n, vector<vector<int>> edges, int src) {
        // Code here
        //(n-1) iterations tkhh sssp mil hi jaata hai 
        //If during n-1 iteration evertime dist is changing then negative wieght cycle
        vector<int> dist(n,1e8); //INT_MAX ke liye pta nhi kyoo answer nhi derha
        dist[src]=0;
        for(int i=0;i<n;i++)
        {
            for(auto edge:edges)
            {
                int u=edge[0];
                int v=edge[1];
                int wt=edge[2];
                if((dist[u]+wt)<dist[v])
                {
                    dist[v]=dist[u]+wt;
                }
            }
        }
        
        return dist;
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
        vector<vector<int>> adj;
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1;
            t1.push_back(u);
            t1.push_back(v);
            t1.push_back(w);
            adj.push_back(t1);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.bellman_ford(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends