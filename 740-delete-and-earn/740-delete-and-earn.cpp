class Solution {
public:
    int t[10001];
    int Solve(vector<pair<int,int>> &v,int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return v[n-1].first*v[n-1].second;
        }
        if(t[n]!=-1)
        {
            return t[n];
        }
        return t[n]=max(((v[n-1].first*v[n-1].second)+Solve(v,n-2)),Solve(v,n-1));
    }
    
    int deleteAndEarn(vector<int>& nums) {
        int max=INT_MIN;
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        int HT[max+1];
        memset(HT,0,sizeof(HT));
        memset(t,-1,sizeof(t));
        for(int i=0;i<nums.size();i++)
        {
            HT[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(int i=1;i<=max;i++)
        {
            v.push_back({i,HT[i]});
        }
        int m=v.size();
        int ans=Solve(v,m);
        return ans;
    }
};