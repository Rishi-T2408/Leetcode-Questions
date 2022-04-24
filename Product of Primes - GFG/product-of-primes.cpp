// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPrime(long long num)
    {
        if(num==0 || num==1) return false;
        if(num==2) return true;
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0) return false;
        }
        return true;
    }
    long long primeProduct(long long L, long long R){
        // code here
        long long ans=1;
        long long  mod=1e9+7;
        for(long long i=L;i<=R;i++)
        {
            if(isPrime(i))
            {
                ans=(ans*i)%mod;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends