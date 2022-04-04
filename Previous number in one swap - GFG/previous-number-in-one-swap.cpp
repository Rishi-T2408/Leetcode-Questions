// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string previousNumber(string S){
          int n = S.length();
       int ind = n-1;
       while(ind > 0){
           if(S[ind-1] > S[ind]) break;
           ind--;
       }
       
       if(ind == 0){
           return "-1";
       }
       
       int i = n-1, p = ind;
       char curr = (char)47;
       while(i >= ind){
           if(S[i] < S[ind-1] && S[i] >= curr) p = i, curr = S[i];
           i--;
       }
       
       swap(S[ind-1],S[p]);
       if(S[0] == '0') return ("-1");
       
       return (S);
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.previousNumber(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends