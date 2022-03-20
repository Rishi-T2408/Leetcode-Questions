// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string Swap(string &str,char a,char b)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==a)
            {
                str[i]=b;
            }
            else if(str[i]==b)
            {
                str[i]=a;
            }
        }
        return str;
    }

    string chooseandswap(string a){
        vector<int> first(26, 100001);
        for(int i=a.length()-1;i>=0;i--)
            first[a[i] -'a'] = i;
    
        for(int i=0;i<26;i++)
        {
            if(first[i]<100001){
                int minn = 100001;
                for(int j=i+1;j<26;j++)
                    minn = min(minn, first[j]);
    
                if(minn<first[i])
                    return Swap(a, 'a'+i, a[minn]);
            }
        }
        return a;
    }
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends