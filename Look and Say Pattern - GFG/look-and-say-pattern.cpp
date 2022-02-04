// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        if(n==1)
    {
        return "1";
    }
    string str=lookandsay(n-1);
    char ch=str[0];
    int count=0;
    string ans;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
        else{
            ans+=to_string(count);
            ans.push_back(ch);
            ch=str[i];
            count=1;
        }
    }
    ans+=to_string(count);
    ans.push_back(ch);
    return ans;
    }   
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends