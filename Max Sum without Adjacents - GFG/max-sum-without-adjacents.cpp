// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    //Baat yehh hai ki tum dp se krrskte hoo johh question greddy ka hai vohh dp se tohh solve hooskta hai mgrr space faltu kyoo bdhana
	    int inc=0;
	    int exc=0;
	    int ninc;
	    int nexc;
	    for(int i=0;i<n;i++)
	    {
	        ninc=exc+arr[i];
	        nexc=max(inc,exc);
	        inc=ninc;
	        exc=nexc;
	    }
	    return max(inc,exc);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends