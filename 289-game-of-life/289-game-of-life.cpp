class Solution {
public:
    int DeathNote(vector<vector<int>> &mat,int x,int y,int n,int m)
    {
        int count=0;
        int dx[]={-1,0,1};
        int dy[]={-1,0,1};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                int xc=(x+dx[i]);
                int yc=(y+dy[j]);
                if(!(xc==x && yc==y))
                {
                    if(( xc>=0 && xc<n ) && ( yc>=0 && yc<m ))
                    {
                        if(mat[xc][yc]==1) count++;
                    }
                }
            }
        }
        if(mat[x][y]==1 && count<2)
        {
            return 0;
        }
        else if(mat[x][y]==1 && (count>=2 && count<=3))
        {
            return 1;
        }
        else if(mat[x][y]==1 && count>3) return 0;
        else if(mat[x][y]==0 && count==3) return 1;
        else return mat[x][y];
        
    }
    void gameOfLife(vector<vector<int>>& board) {
        /*Live cell
        // less then 2 live neighbours dies 
        // 2 and 3 live neighbours cell lives
        //more then 3 live neighbours cell dies
        */
        // dead cell with 3 live niegbours lives 
       int n=board.size();
       if(n==0) return ;
       int m=board[0].size();
       vector<vector<int>> mat(n,vector<int>(m,0));
       
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               int chk=DeathNote(board,i,j,n,m);
               mat[i][j]=chk;
           }
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               board[i][j]=mat[i][j];
           }
       }
    }
};