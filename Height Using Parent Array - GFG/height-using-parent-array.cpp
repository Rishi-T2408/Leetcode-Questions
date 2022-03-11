// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findHeight(int N, int arr[]){
        // code here
        unordered_map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[i]=arr[i];
        }
        int h=0;
        int idx=N-1;
        int ans=INT_MIN;
        for(int idx=(N-1);idx>=1;idx--)
        {
            h=0;
            while(idx!=-1)
            {
                h++;
                idx=mp[idx];
            }     
            ans=max(ans,h);
        }
       
        return h;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends