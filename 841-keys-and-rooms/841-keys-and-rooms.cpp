class Solution {
public:
    void DFS(vector<vector<int>>& rooms,vector<int> &vis,int curr)
    {
        vis[curr]=1;
        for(int i=0;i<rooms[curr].size();i++)
        {
            int child=rooms[curr][i];
            if(vis[child]==0)
            {
                DFS(rooms,vis,child);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> vis(rooms.size(),0);
        DFS(rooms,vis,0);
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