// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void DFS(int curr,vector<int> adj[],vector<int> &vis,vector<int> &tim,vector<int> &low,int &cnt,int p,vector<int> &ans,set<int> &st)
    {
        vis[curr]=1;
        low[curr]=cnt;
        tim[curr]=cnt;
        int child=0;
        cnt++;
        for(auto it: adj[curr])
        {
            if(it==p) continue;
            if(!vis[it])
            {
               
                /*Crystal clear*/
                DFS(it,adj,vis,tim,low,cnt,curr,ans,st);
                
                if(low[it]>=tim[curr] && p!=-1)  //Bridge articulation condition + cycle start articulation condition
                {
                    if(st.find(curr)==st.end())
                    {
                         ans.push_back(curr);
                         st.insert(curr);
                    }
                }
                else{
                    low[curr]=min(low[curr],low[it]);
                }
                child++;  /*Because there are self loops isliye aaisa hoorha hai simple*/
            }
            else{
                low[curr]=min(low[curr],tim[it]);  //Adjacent ka kmm hai vohh cycle ka baap hai bs yehh nikaalna hai
            }
            
        }
        /*Crystal clear*/
        if(p==-1 && child>1)
        {
            if(st.find(curr)==st.end())
            {
                st.insert(curr);
                ans.push_back(curr);
            }
        }
    }
  
    vector<int> articulationPoints(int n, vector<int>adj[]) {
        // Code here
        vector<int> vis(n,0);
        vector<int> tim(n,0);
        vector<int> low(n,0);
        vector<int> ans;
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            if(vis[i]==0)
            {
                DFS(i,adj,vis,tim,low,cnt,-1,ans,st);
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
            return ans;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends