// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int n, vector<vector<int>> adj[])
    {
        // code here
        //Minimum ke liye aap priority queue use kriye but key array tohh aapko maintain krna hi hooga
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        vector<bool> MST(n,false);
        vector<int> parent(n,-1);
        vector<int> key(n,INT_MAX);
        key[0]=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            //every time we have to find minimum in the key array
            int mn=INT_MAX;
            int k;
            while(!pq.empty() && MST[pq.top().second]==true) pq.pop();
            mn=pq.top().first;
            k=pq.top().second;
            ans+=mn; 
            MST[k]=true;
            for(int i=0;i<adj[k].size();i++)
            {
                auto curr=adj[k][i];
                int node=curr[0];
                int wt=curr[1];
                if(wt<key[node])
                {
                    key[node]=wt;
                    parent[node]=k;
                    pq.push({key[node],node});
                }
            }
        }
        
        return ans;
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
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends