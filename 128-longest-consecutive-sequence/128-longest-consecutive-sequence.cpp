class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int curr=nums[i];
                int cnt=0;
                while(st.find(curr)!=st.end())
                {
                    cnt++;
                    curr++;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};

