class Solution {
public:
    int trap(vector<int>& nums) {
        //We are in this question storing paani with respect to left perspective and with respect to right perspective
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        int lM=0;
        int rM=0;
        while(i<j)
        {
            if(nums[i]<nums[j])
            {
                nums[i]>=lM?lM=nums[i]:ans+=(lM-nums[i]);   //Isse left ke threw area aajayega
                i++;
            }
            else{
                nums[j]>=rM?rM=nums[j]:ans+=(rM-nums[j]);
                j--;
                //Aur isse right ke threw aajayega simple
            }
        }
        return ans;
    }
};