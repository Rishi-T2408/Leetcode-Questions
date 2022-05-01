// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	    vector<int> ans;
	    
	    for(int i=0;i<Query.size();i++)
	    {
	        vector<int> hm(26,0);
	        for(int j=Query[i][0]-1;j<Query[i][1];j++)
	        {
	            hm[str[j]-'a']++;
	        }
	        int cnt=0;
	        for(int i=0;i<26;i++)
	        {
	            if(hm[i]>0)
	            cnt++;
	        }
	        ans.push_back(cnt);
	    }
	    
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends