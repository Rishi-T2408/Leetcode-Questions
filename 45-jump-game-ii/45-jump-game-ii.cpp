class Solution {
public:
    int t[10001];
    int Solve(vector<int>& nums,int n)
    {
        if(n>=(nums.size()-1))
            return 0;
        
        if(t[n]!=-1)
        {
            return t[n];
        }
        int count=nums[n];
        int mn=INT_MAX;
        int flag=0;
        while(count!=0)
        {
            flag=1;
            int step=Solve(nums,n+count)+1;
            mn=min(step,mn);
            count--;
        }
        if(flag==0)
        {
            return 10001;
        }
        return t[n]=mn;
    }
    int jump(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int n=nums.size();
        return Solve(nums,0);
    }
};