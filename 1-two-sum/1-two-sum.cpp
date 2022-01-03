class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int lenght= nums.size();                                                 
        vector<int> ret(2);
        for(int i=0;i<lenght;i++)
        {
            
            for(int j=i+1;j<lenght;j++)
            {
                if(nums[i]!=-1000)
            {
                if(nums[i]+nums[j]==target)
                {
                    nums[j] =-1000;
                    ret[0]=i;
                    ret[1]=j;
                }
            }
            }
            
        }
        return ret;
    }
};