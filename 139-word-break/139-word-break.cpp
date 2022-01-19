class Solution {
public:
    bool wordBreak(string s, vector<string>& words) {
        //This is rhe question of Dp that is not matching to any format it's totally brute mind apporoach 
        int len=s.length();
        vector<bool> dp(len+1,false);
        dp[len]=true; //As it is obvious ki empty string we can represent
        for(int j=len-1;j>=0;j--)
        {
            for(auto c:words)
            {
                if(j+c.length()<=len && s.substr(j,c.length())==c)    //j index se c.size() ki substr kaat skte ki nhi
                {
                    dp[j]=dp[j+c.length()];
                }
                if(dp[j])
                {
                    break;
                }
            }
        }
        
        //In this way from back we are seeing that from any index from back we can cut an substr which is given in dictionary
        return dp[0];
    }
};