// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long countEvenSum(int arr[], int n) {
        // code here
        unordered_map<int,int> mp;
        long long ans=0;
        long long sum=0;
        long long odd=0;
        long long even=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum%2==0)
            {
                even++;
                ans+=even; 
            }
            else{
                ans+=odd;
                odd++;
            }
        }
        return ans;
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
        auto ans = ob.countEvenSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends