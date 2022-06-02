// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int res1=-1;
        int res2=-1;
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]==x)
            {
                res1=mid;
               
                r=mid-1;
            }
            else if(arr[mid]<x)
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        
        l=0;
        r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]==x)
            {
                res2=mid;
                l=mid+1;
            }
            else if(arr[mid]<x)
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        vector<int> ans;
        
        if(res1==-1 || res2==-1)
        {
            ans.push_back(-1);
            return ans;   
        }
        ans.push_back(res1);
        ans.push_back(res2);
        return ans;
    }
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends