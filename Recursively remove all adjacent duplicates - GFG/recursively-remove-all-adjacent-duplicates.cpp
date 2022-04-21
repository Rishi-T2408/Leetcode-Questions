// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    
    string remove(string s){
        while(1)
        {
            string temp;
            int i=0;
            int n=s.length();
            while(i<n)
            {
                int flag=0;
                while(i+1<n && s[i]==s[i+1])
                {
                    flag=1;
                    i++;
                }
                if(flag==1)
                {
                    i++;
                }
                else{
                    temp.push_back(s[i++]);
                }
            }
            if(s==temp) break;
            
            s=temp;
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends