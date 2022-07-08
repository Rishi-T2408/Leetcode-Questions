class Solution {
public:
    //DFS implementation
    bool Check(vector<vector<int>>& graph,vector<int> &vis,vector<int> &colour,int curr,int col)
    {
        vis[curr]=1;
        colour[curr]=col;
        for(int i=0;i<graph[curr].size();i++)
        {
            int child=graph[curr][i];
            if(vis[child]==0)
            {
                if(!Check(graph,vis,colour,child,!col)) return false; 
            }
            else{
                if(colour[curr]==colour[child]) 
                    return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        //An bipartite graph is an graph which can be coloured using exaclty two colours and no two adjacent nodes have the same colour
        int n=graph.size();
        vector<int> vis(n,0);
        vector<int> colour(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                bool ans=Check(graph,vis,colour,i,0);
                if(ans==false) return false;
            }
        }
        return true;  //Bipartite hoona chahiye tohh hrr traf se hoona chahiye
        
    }
};