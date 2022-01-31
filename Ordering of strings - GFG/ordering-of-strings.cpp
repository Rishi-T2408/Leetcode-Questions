// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    vector<string> orderString(string s[], int n)
    {
    	//code here.
    	vector<string> ans;
    	for(int i=0;i<n;i++)
    	{
    	    ans.push_back(s[i]);
    	}
    	sort(ans.begin(),ans.end());
    	int m=ans.size();
    	vector<string> sol;
    	sol.push_back(ans[0]);
    	sol.push_back(ans[m-1]);
    	return sol;
    }
    
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		
		Solution ob;
		vector<string> res = ob.orderString(s , n);
	    cout<<res[0]<<" "<<res[1]<<endl;
    }
}  // } Driver Code Ends