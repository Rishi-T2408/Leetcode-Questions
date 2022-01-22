class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n,0);
        dp[0]=1;                 //0th term is 1 aur iss taarike se mapping krri hai
        int p2=0;
        int p3=0;
        int p5=0;
        for(int i=1;i<n;i++)
        {
            int multiple2=dp[p2]*2;
            int multiple3=dp[p3]*3;
            int multiple5=dp[p5]*5;
            dp[i]=min(multiple2,min(multiple3,multiple5));
            if(dp[i]==multiple2)
            {
                p2++;
            }
            if(dp[i]==multiple3)
            {
                p3++;
            }
            if(dp[i]==multiple5)
            {
                p5++;
            }
        }
        return dp[n-1];
    }
};