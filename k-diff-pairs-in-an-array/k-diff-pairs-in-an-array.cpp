class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        map<pair<int,int>,int> HM;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]-k)!=mp.end())
            {
                if(HM.find({nums[i],(nums[i]-k)}) == HM.end())
                {
                    HM[{nums[i],(nums[i]-k)}]++;
                    HM[{(nums[i]-k),nums[i]}]++;
                    count++;
                }
                
            }
            if(mp.find(nums[i]+k)!=mp.end())
            {
                if(HM.find({nums[i],(nums[i]+k)}) == HM.end())
                {
                    HM[{nums[i],(nums[i]+k)}]++;
                    HM[{(nums[i]+k),nums[i]}]++;
                    count++;
                }
            }
            mp[nums[i]]++;
        }
        return count;
    }
};