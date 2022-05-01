// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	int superPrimes(int n)
	{
       //An number is an super prime number if it can be divided into sum of two prime numbers where I gurentee you that one of the prime number 
       //Will always be 2
       int N=n+2;  //Jisse prime number vaala purra array taarike se likha jaye
       vector<bool> is_prime(N,true);
       is_prime[0]=false;
       is_prime[1]=false;
       int ans=0;
       for(int i=2;i<N;i++)
       {
           if(is_prime[i])
           {
               for(int j=2*i;j<N;j+=i)  //We will make all the multiple of i as composite
               {
                  is_prime[j]=false;
               }
           }
       }
       
       for(int i=2;i<=n;i++)
       {
           if(is_prime[i] && is_prime[i-2])
           {
               ans++;
           }
       }
      
       return ans;
	}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends