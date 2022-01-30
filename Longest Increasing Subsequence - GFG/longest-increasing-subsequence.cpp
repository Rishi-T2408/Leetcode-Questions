// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int nums[])
    {
       // your code here
       //upper bound gives the index of the next greater element for an given element 
       //When you know what upper bond do you can easily find all the last element that are in that length of striclty increasing subsequence
       vector<int> dp((n+1),INT_MAX);
       dp[0]=INT_MIN;
       for(int i=0;i<n;i++)
       {
           int val=nums[i];
           for(int j=0;j<=n;j++)
           {
               if(dp[j]>=val)
               {
                   dp[j]=val;
                   break;
               }
           }
       }
       for(int i=n;i>=0;i--)
       {
           if(dp[i]!=INT_MAX)
           {
               return i;
           }
       }
       return -1;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends