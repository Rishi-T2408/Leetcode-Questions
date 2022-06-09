// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    vector<int> v;
	    vector<int> ans;
	    int res=INT_MIN;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<0)
	        {
	            if(sum>res)
	            {
	               res=sum;
	               ans=v;   
	            }
	            
	            v.clear();
	            sum=0;
	        }
	        else{
	            sum+=a[i];
	            v.push_back(a[i]);
	        }
	    }
	    if(sum>res)
	    {
	        ans=v;
	        v.clear();
	    }
	    if(ans.size()==0) {
	        ans.push_back(-1);
	        return ans;
	    }
	    return ans;
	}
};

// { Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends