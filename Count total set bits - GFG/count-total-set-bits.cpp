// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here is nearest 2 ki power vaala number dekho usse ekhh kmm tkhh ke saare set bit count mil jaayenge
        if(n<=2) return n;
        int x=0;
        int ans=1;
        while(ans*2<=n)
        {
            x++;
            ans=ans*2;
        }
        int val=pow(2,x-1)*x;
        val+=(n-pow(2,x)+1);
        return val+countSetBits((n-pow(2,x)));
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends