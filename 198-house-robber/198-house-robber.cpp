class Solution {
public:
    int rob(vector<int>& nums) {
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
};