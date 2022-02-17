class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=INT_MIN;
        int flag=0;
        int mn=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>mn)
            {
                flag=1;
                ans=max(ans,(nums[i]-mn));
            }
            mn=min(mn,nums[i]);
        }
        if(flag==0)
            return -1;
        return ans;
    }
};