// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string moveRobots(string s1, string s2){
        if(s1.length()!=s2.length())
        {
            return "No";
        }
        stack<pair<char,int>> st;
        int n2=s2.length();
        for(int i=(n2-1);i>=0;i--)
        {
            if(s2[i]!='#')
            st.push({s2[i],i});
        }
        for(int i=0;i<s1.length();i++)
        {
            //Jbhh stack ktmm hoojayega tohh top vaala fuction kaam hi nhi krega iliye lafda patti hoojayega
            if(!st.empty() && s1[i]==st.top().first)
            {
                if(s1[i]=='B' && st.top().second>=i)       //B is moving right or staying in it's current position only
                {
                    st.pop();
                }   
                if(s1[i]=='A' && st.top().second<=i)  //Means A in it's final state is moving left or staying in it's same place so this is also correnct
                {
                    st.pop();
                }    
            }
        }
        if(st.size()==0)
        return "Yes";
        return "No";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.moveRobots(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends