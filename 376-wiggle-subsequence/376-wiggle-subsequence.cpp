class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> dp(n,{1,0}); //pair first is val and pair second is difference
        int ans=INT_MIN;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(dp[j].second>0)
                {
                    if(nums[j]>nums[i])
                    {
                        dp[i].first=max(dp[i].first,(dp[j].first+1));
                        dp[i].second=nums[i]-nums[j];        //j is from 0 to i
                    }
                }
                else if(dp[j].second<0)
                {
                    if(nums[j]<nums[i])
                    {
                        dp[i].first=max(dp[i].first,(dp[j].first+1));
                        dp[i].second=nums[i]-nums[j];        //j is from 0 to i
                    }
                }
                else{
                    if(nums[j]!=nums[i])
                    {
                        dp[i].first=max(dp[i].first,(dp[j].first+1));
                         dp[i].second=nums[i]-nums[j]; 
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(dp[i].first>ans)
            {
                ans=dp[i].first;
            }
        }
        
        return ans;
    }
};