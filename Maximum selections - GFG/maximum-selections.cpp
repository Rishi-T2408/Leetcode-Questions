// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// ranges[i][0] is the start of ith range
// ranges[i][1] is the end of ith range

class Solution{
public:
    static bool comp(vector<int> &v1,vector<int> &v2)
    {
        if(v1[1]==v2[1]) return v1[0]<v2[0];
        return v1[1]<v2[1];
    }
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        sort(ranges.begin(),ranges.end(),comp);
        int cnt=1;
        auto temp=ranges[0];
        int n=ranges.size();
        for(int i=1;i<n;i++)
        {
            if(ranges[i][0]<temp[1]) continue;
            else
            {
                cnt++;
                temp=ranges[i];
            }
            
        }
        return cnt;
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

		vector< vector<int> > v(n,vector<int>(2));
		for(int i=0; i<n; i++)
			cin>> v[i][0] >> v[i][1];
			
        Solution ob;
		cout<< ob.max_non_overlapping(v) << endl;
	}
	return 1;
}

  // } Driver Code Ends