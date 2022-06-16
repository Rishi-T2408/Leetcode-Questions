// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        void LPS(string pat,vector<int> &lps)
        {
           int len =0, i=1;
            lps[0]=0;
            while(i<pat.length())
            {
                if(pat[i]==pat[len]) lps[i++] = ++len;
                else
                    if(len ==0) lps[i++] = 0;
                    else len=lps[len-1];
            }
        }
    
        vector <int> search(string pat, string txt)
        {
            //code hee.
            int n=pat.length();
            int m=txt.length();
            vector<int> lps(n);
            LPS(pat,lps);
            
            int i=0;
            int j=0;
            vector<int> ans;
            while(i<m)
            {
                if(txt[i]==pat[j]) 
                {
                    i++;
                    j++;
                }
                if(j==n)
                {
                    ans.push_back(i-j+1);
                    j=lps[j-1];
                }
                else if(i<m && pat[j]!=txt[i]){
                    if(!j) i++;
                    else j=lps[j-1];  //Yehh match nhi krrha tohh older pattern se hi dhekna padhega nhh
                }
            }
            return ans;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends