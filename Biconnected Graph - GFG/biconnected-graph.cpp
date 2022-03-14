// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int biGraph(int arr[], int n, int e) {
        // code her
       if(n<=2) return 1;
       vector<int> degree(n+1,0);
       for(int i=0;i<2*e;i++)
       {
           degree[arr[i]]++;
       }
       for(int i=0;i<n;i++)
       {
           if(degree[i]<2) return 0;
       }
       return 1;
    }
    
    //For an graph to be connect the degree of every node should be greater then 2 if number of vertices are greater then 2
    //An graph will be always connected if vertices is less then 2
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        cin>>n>>e;
        
        int arr[2*e];
        for(int i=0; i<2*e; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.biGraph(arr,n,e) << endl;
    }
    return 0;
}  // } Driver Code Ends