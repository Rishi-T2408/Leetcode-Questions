class Solution {
public:
    int robS(vector<int>& nums) {
       int n=nums.size();
       int t[n+1];
       memset(t,0,sizeof(t));
       t[0]=0;
       if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
        }
        t[1]=nums[0];
        for(int i=2;i<=n;i++)
        {
            t[i]=max((nums[i-1]+t[i-2]),t[i-1]);
        }
        return t[n];
    }
    int rob(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
        }
        
        for(int i=0;i<n-1;i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++)
        {
            v2.push_back(nums[i]);
        }
        int p=robS(v1);
        int q=robS(v2);
        return max(p,q);
    }
};