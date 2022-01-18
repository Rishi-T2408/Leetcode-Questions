class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mx=0;
        int count=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<count)
            {
                count=nums[i];
            }
            else{
                mx=max((nums[i]-count),mx);
            }
        }
        return mx;
    }
};