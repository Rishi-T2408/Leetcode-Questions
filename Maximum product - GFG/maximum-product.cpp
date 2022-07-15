// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	

	public:
	//k is an even number I want to have maximum product of k number from array
	long long int Product(int arr[],int n,int k)
	{
	    long long ans=1;
	    int i=0;
	    int j=(n-1);
	    while(i<j && k!=0)
	    {
	       long long p1=arr[i]*arr[i+1];
	       long long p2=arr[j]*arr[j-1];
	       if(p1>p2)
	       {
	           ans*=p1;
	           i+=2;
	           k-=2;
	       }
	       else{
	           ans*=p2;
	           j-=2;
	           k-=2;
	       }
	    }
	    return ans;
	}
	long long maxProductSubarrayOfSizeK(int arr[], int n, int k) 
	{ 
	    // Your code goes here
	    sort(arr,arr+n);
	    long long pro=1;
	    if((k&1) && arr[n-1]==0) return 0;  //k&1 gives whether we have k odd or even
	    else if((k&1) && arr[n-1]<0)
	    {
	        for(int i=(n-1);(k!=0 && i>=0); i--,k--)
	        {
	            pro=pro*arr[i];
	        }
	        return pro;
	    }
	    
	    else if((k&1) && arr[n-1]>0)
	    {  
	        pro=arr[n-1]*Product(arr,n-1,k-1);
	    }
	    
	    else{
	        pro=Product(arr,n,k);
	    }
	    return pro;
	} 
		 

};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        

        Solution ob;
        cout<<ob.maxProductSubarrayOfSizeK(a,n,k);
        
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends