class Solution {
public:
    int t[10001];
    bool Solve(vector<int>& nums,int n)
    {
        if(n>=(nums.size()-1))
            return true;
        
        if(t[n]!=-1)
        {
            return t[n];
        }
        int count=nums[n];
        while(count!=0)
        {
            if(Solve(nums,n+count))
                return t[n]=true;
            count--;
        }
        return t[n]=false;
    }
    
    bool canJump(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        int n=nums.size();
        return Solve(nums,0);
    }
};