// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        vector<int> HT(26,0);
        for(int i=0;i<a.length();i++) HT[a[i]-'a']++;
        for(int j=0;j<b.length();j++) HT[b[j]-'a']--;  //O(a+b) and space is O(1)
        for(int i=0;i<26;i++)
        {
            if(HT[i]!=0) return false;
        }
        return true;
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends