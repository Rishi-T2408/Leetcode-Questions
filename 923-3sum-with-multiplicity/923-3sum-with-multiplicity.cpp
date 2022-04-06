class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int n=arr.size();
        int cnt=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            for(int j=(i+1);j<n;j++)
            {
                int chk=(target-arr[i]-arr[j]);
                cnt+=mp[chk];
            }
            cnt%=mod;
            mp[arr[i]]++;
        }
        return cnt;
    }
};