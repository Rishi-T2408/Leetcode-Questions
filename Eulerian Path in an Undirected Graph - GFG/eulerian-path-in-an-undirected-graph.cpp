// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    int eulerPath(int N, vector<vector<int>> graph){
       //For an graph to be eularean there should be less then equal to 2 odd degree nodes 
       int odd=0;
       for(int i=0;i<N;i++)
       {
           int count=0;
           for(int j=0;j<N;j++)
           {
               if(graph[i][j]==1) count++;
           }
           if(count&1) odd++;
       }
       return odd>2?0:1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j = 0;j < N;j++)
                cin>>graph[i][j];
        
        Solution ob;
        cout<<ob.eulerPath(N, graph)<<"\n";
    }
    return 0;
}  // } Driver Code Ends