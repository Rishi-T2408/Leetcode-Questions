class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int dp[n];
        for(int i=0;i<n;i++)
        {
            dp[i]=1;   
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)   
            {
                if(nums[j]<nums[i])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        return ans;
    }
    
};