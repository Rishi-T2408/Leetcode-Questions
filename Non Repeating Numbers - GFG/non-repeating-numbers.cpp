// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            res=res^nums[i];
        }
        int n=nums.size();
        int bit_mask=res&~(res-1);
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n;i++)
        {
            if((nums[i]&bit_mask)==0)
            {
                ans1=ans1^nums[i];
            }
            else{
                ans2=ans2^nums[i];
            }
        }
        
        vector<int> v;
        if(ans1<ans2)
        {
            v.push_back(ans1);
            v.push_back(ans2);      
        }
        else{
            v.push_back(ans2);
            v.push_back(ans1);  
        }
      
        return v;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends