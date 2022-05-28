class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) cnt++;
            else{
                nums[k++]=nums[i];
            }
        }
        for(int i=(n-cnt);i<n;i++)
        {
            nums[i]=0;
        }
   
    }
};