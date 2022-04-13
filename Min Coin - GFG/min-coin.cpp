// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int MinCoin(vector<int>nums, int W)
	{
	    // Code here
	    int n=nums.size();
	    const int inf=INT_MAX-1;
	    int t[n+1][W+1];
	    for(int j=0;j<=W;j++) t[0][j]=inf;
	    for(int i=0;i<=n;i++) t[i][0]=0;
	    
	    
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=W;j++)
	        {
	            if(j>=nums[i-1])   //Ohh shitt shitt shitt shitt fuck agrr capacity zyada hai tohh hi tohh vohh number tum select krrskte hoo agrr number badha hai aur usko rkhne ki capacity hi nhi hai tohh loode ka select kroge tum usse
	            {
	                t[i][j]=min(t[i-1][j],1+t[i][j-nums[i-1]]);         //air number of coins jinna hai tohh 1+ hooga bss
	            }
	            else{
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    if(t[n][W]==inf) return -1;
	    return t[n][W];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, amount;
		cin >> n >> amount;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.MinCoin(nums, amount);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends