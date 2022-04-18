// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long int Solve(long long int k,long long int m)
    {
        long long int mod=1e9+7;
        long long int ans=1;
        k%=mod;
        while(m)
        {
            if(m&1) ans=(ans*k)%mod;
            m=m>>1;
            k=(k*k)%mod;
        }
        return ans;
    }
    long long karyTree(int k, int m) {
        // code here
        long long int ans=Solve(k,m);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,m;
        
        cin>>k>>m;

        Solution ob;
        cout << ob.karyTree(k,m) << endl;
    }
    return 0;
}  // } Driver Code Ends