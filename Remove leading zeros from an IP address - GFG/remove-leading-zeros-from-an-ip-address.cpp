// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
        vector<string> v;
        int i=0;
        int j=0;
        int n=s.length();
        string str;
        while(j<n)
        {
            while(j<n && s[j]!='.')
            {
                str.push_back(s[j++]);
            }
            v.push_back(str);
            str="";
            j++;
        }
        string temp;
        string ans;
        for(int i=0;i<v.size();i++)
        {
            str=v[i];
            int r=0;
            while((r<v[i].length()) && v[i][r]=='0')
            {
                r++;
            }
            while((r<v[i].length()))
            {
                temp.push_back(v[i][r++]);
            }
            if(temp=="")
            {
                temp.push_back('0');
            }
            ans+=temp;
            ans.push_back('.');
            temp="";
        }
        ans=ans.substr(0,ans.size()-1);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends