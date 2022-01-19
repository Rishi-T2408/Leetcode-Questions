// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string s, vector<string> &words) {
        //code here
        int len=s.length();
        vector<bool> dp(len+1,false);
        dp[len]=true;
        for(int j=len-1;j>=0;j--)
        {
            for(auto c:words)
            {
                if((j+c.length())<=len && s.substr(j,c.length())==c)
                {
                    dp[j]=dp[j+c.length()];
                }
                if(dp[j])
                break;
            }
        }
        return dp[0];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends