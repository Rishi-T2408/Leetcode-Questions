// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
           // code here
        string t=A;
        int cnt=1;
        while(t.length()<B.length())
        {
            t+=A;
            cnt++;
        }
        if(t.find(B)!=-1)
        {
            return cnt;
        }
        t+=A;
        if(t.find(B)!=-1)
        {
            return cnt+1;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends