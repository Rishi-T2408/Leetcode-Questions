class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        bool pro=true;
        int ans=0;
        int n=nums.size();
        int j=0;
        bool ch;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ch=true;
            }
            else if(nums[i]<0){
                ch=false;
            }
            else{
                pro=true;
                j=i+1;
                continue;
            }
            pro=!(pro^ch);
            if(pro==true)
            {
                ans=max(ans,(i-j+1));
            }
        }
        pro=true;
        j=(n-1);
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>0)
            {
                ch=true;
            }
            else if(nums[i]<0){
                ch=false;
            }
            else{
                pro=true;
                j=i-1;
                continue;
            }
            pro=!(pro^ch);
            if(pro==true)
            {
                ans=max(ans,(j-i+1));
            }
        }
        return ans;
    }
};