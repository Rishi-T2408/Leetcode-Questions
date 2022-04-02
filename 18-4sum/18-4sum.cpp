class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<=3) return ans;
        for(int i=0;i<n;i++)
        {
            for(int j=(i+1);j<n;j++)
            {
                int chk=(target-(nums[i]+nums[j]));
                //now all that's left is two sum
                int f=(j+1);
                int b=(n-1);
                while(f<b)
                {
                    int two_sum=(nums[f]+nums[b]);
                    if(two_sum<chk) f++;
                    else if(two_sum>chk) b--;
                    else{
                        vector<int> quad;
                        quad.push_back(nums[i]);
                        quad.push_back(nums[j]);
                        quad.push_back(nums[f]);
                        quad.push_back(nums[b]);

                        ans.push_back(quad);
                        while(f<b && nums[f]==quad[2]) f++;
                        while(f<b && nums[b]==quad[3]) b--;
                    }
                }
                
                while(j<n-1 && nums[j]==nums[j+1]) j++;
            }
            while(i<n-1 && nums[i]==nums[i+1]) i++;
        }
        
        return ans;
    }
};