// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public: 
    bool isPrime(int n)
    {
        if(n==2)
        {
            return true;
        }
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }

    int NextPrime(int n)
    {
        int k=n+1;
        while(!isPrime(k))
        {
            k++;
        }
        return k;
    }
    long long int largestPrimeFactor(int n){
        // code here
        int k=2;
        while(n!=1)
        {
            if(n%k==0)
            {
                n=n/k;
            }
            else{
                k=NextPrime(k);
            }
        }
        return k;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends