// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string sevenSegments(string S, int N) {
        S=S.substr(0,N);  //String length N se zyada hooskti hai aur hmme N ke barabrr hi chahiye
        int segment[]={6,2,5,5,4,5,6,3,7,5};
        int cnt=0;
        for(int i=0;i<N;i++)
        {
            cnt+=segment[S[i]-'0'];
        }
        string x="";
        for(int i=(N-1);i>=0;i--)
        {
            for(int j=0;j<=9;j++)
            {
                if((cnt-segment[j])>=2*i && (cnt-segment[j])<=7*i)   //segment table mai number 2and 7 ki range mai hi hai
                {
                    x+=j+'0';
                    cnt-=segment[j];
                    break;
                }
            }
        }
        return x;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        string S;
        cin>>S;

        Solution ob;
        cout << ob.sevenSegments(S,N) << endl;
    }
    return 0;
}  // } Driver Code Ends