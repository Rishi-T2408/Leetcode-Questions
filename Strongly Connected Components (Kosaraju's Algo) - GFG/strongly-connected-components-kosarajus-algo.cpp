// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void DFS(int curr,vector<int> &vis,vector<int> adj[],stack<int> &st)
	{
	    vis[curr]=1;
	    for(int i=0;i<adj[curr].size();i++)
	    {
	        int child=adj[curr][i];
	        if(vis[child]==0)
	        {
	            DFS(child,vis,adj,st);
	        }
	    }
	    
	    st.push(curr);  //Topological sort abhh meri ragho mao hai
	}
	
    int kosaraju(int n, vector<int> adj[])
    {
        //code here
        stack<int> st;
        vector<int> ans;
        int res=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                DFS(i,vis,adj,st);   //Topological sort milega mgrr ulta stack se nikalne ke baadh vohh seedha hoojayega
            }
        }
        for(int i=0;i<n;i++) vis[i]=0;
        //Transporse se hii kaam chalega 0, 3 4 se pahle aana chahiye aur transporse lenge
        //0 se chalega orginal mai tohh 3 4 mai paahusch jaayrga vohh hmme nhi krvana hai aur simple simple answer laana hai tohh simple transporse lgana hai aur logic apne aap ko smaghana hai
        //Transporse lelenge toh nhi chalrga
        
        vector<int> graph[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                graph[adj[i][j]].push_back(i);
            }
        }
       
        while(!st.empty())
        {
            int curr=st.top();
            st.pop();
            if(vis[curr]==0)
            {
                DFS(curr,vis,graph,st);
                res++;
            }
        }
        return res;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends