class Solution {
public:
    void BFS(vector<vector<int>>& rooms,vector<int> &vis,int curr)
    {
        queue<int> q;
        q.push(curr);
        int node;
        while(!q.empty())
        {
            node=q.front();
            q.pop();
            vis[node]=1;
            for(int i=0;i<rooms[node].size();i++)
            {
                int child=rooms[node][i];
                if(vis[child]==0)
                {
                    q.push(child);
                }
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vis(rooms.size(),0);
        BFS(rooms,vis,0);
        for(int i=0;i<rooms.size();i++)      //We will traverse threw graph and if any node is still unvisited then we cannot unlock it
        {
            if(vis[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};