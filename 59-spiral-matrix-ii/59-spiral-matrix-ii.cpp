class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int chk=1;
        int up=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int temp=0;
       
        while(up<=down && left<=right)
        {
            if(temp==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans[up][i]=chk;
                    chk++;
                } 
                up++;
            }
            if(temp==1)
            {
                for(int j=up;j<=down;j++)
                {
                    ans[j][right]=chk;
                    chk++;
                }
                right--;
            }
            if(temp==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[down][i]=chk;
                    chk++;
                }
                down--;
            }
            if(temp==3)
            {
                for(int i=down;i>=up;i--)
                {
                    ans[i][left]=chk;
                    chk++;
                }
                left++;
            }
            temp=(temp+1)%4;
        }
        
        return ans;
    }
};