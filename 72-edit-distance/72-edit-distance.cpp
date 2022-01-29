class Solution {
public:
    int minDistance(string str1, string str2) {
        //Abhi maine iska solution dekah alalyse tohh hoogya mgrr vaisa kyoo hai yehh smag nhi aaya
        //I will fully analyse the apporoach bu tommorow
        int n=str1.length();
        int m=str2.length();
        int t[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            t[i][0]=i;
        }
        for(int j=0;j<=m;j++)
        {
            t[0][j]=j;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                    t[i][j]=t[i-1][j-1];
                }
                else{
                    t[i][j]=1+min({t[i-1][j],t[i][j-1],t[i-1][j-1]});            //for finding minimum of more then one things you have to put it in {}
                    
                }
            }
        }
        return t[n][m];   
    }
};