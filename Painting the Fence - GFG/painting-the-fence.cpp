// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
        // code here
        if(n==1)
        {
            return k;
        }
        if(k==1) return 0;
        long mod=1e9+7;
        long long  last2same=k%mod;
        long long last2diff=((k%mod)*((k-1)%mod));
        long long total=(last2same+last2diff)%mod;
        for(int i=3;i<=n;i++)
        {
            long long nl2same=last2diff;
            long long nl2diff=(total%mod*(k-1)%mod)%mod;
            
            last2same=nl2same;
            last2diff=nl2diff;
            total=(last2same+last2diff)%mod;
        }
        return total;
    }
};

// { Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends