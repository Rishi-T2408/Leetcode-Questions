class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int pro=1;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            pro*=nums[i];
            ans=max(ans,pro);
            if(pro==0)
            {
                pro=1;
            }
        }
        pro=1;
        for(int i=n-1;i>=0;i--)
        {
            pro*=nums[i];
            ans=max(ans,pro);
            if(pro==0)
            {
                pro=1;
            }
        }
        return ans;
    }
};