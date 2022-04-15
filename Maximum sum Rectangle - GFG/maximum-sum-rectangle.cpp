// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    int Kadane(vector<int> res)
    {
       
        int max1=INT_MIN;
        int sum=0;
        for(int i=0;i<res.size();i++)
        {
            sum+=res[i];
            max1=max(max1,sum);
            if(sum<0)
            {
                sum=0;
            }
           
        }
        return max1;
    }
    
    int maximumSumRectangle(int r, int c, vector<vector<int>> M) {
        int ans=INT_MIN;
        for(int i=0;i<c;i++)
        {
            vector<int> res(r);
            for(int j=i;j<c;j++)
            {
                for(int k=0;k<r;k++)
                {
                    res[k]+=M[k][j];
                }
                ans=max(ans,Kadane(res));
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
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends