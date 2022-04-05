class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l=0;
        int n=nums.size();
        int r=(n-1);
        int left_max=0;
        int right_max=0;
        int ans=INT_MIN;
        while(l<r)
        {
            left_max=max(left_max,nums[l]);
            right_max=max(right_max,nums[r]);
            ans=max(ans,(min(left_max,right_max)*(r-l)));
            if(nums[l]<nums[r])
            {
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};