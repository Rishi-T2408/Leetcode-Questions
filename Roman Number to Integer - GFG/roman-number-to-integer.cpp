// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int n=s.length();
        int num=0;
        int ans=0;
        for(int i=(n-1);i>=0;i--)
        {
            switch(s[i])
            {
                case 'I': num=1;
                break;
                case 'V': num=5;
                break;
                case 'X': num=10;
                break;
                case 'L': num=50;
                break;
                case 'C': num=100;
                break;
                case 'D': num=500;
                break;
                case 'M': num=1000;
                break;
            };
            if(ans<4*num)   //Our ans should be smaller then 4 times of num in normal flow jisme IV XL type glitches nhi hai 
            ans+=num;
            else{
                ans-=num;
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends