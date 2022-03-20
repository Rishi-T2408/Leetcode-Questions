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
        vector<int> first(26,100001);
        int n=a.length();
        for(int i=(n-1);i>=0;i--)
        {
            first[a[i]-'a']=i;
        }
        for(int i=0;i<26;i++)
        {
            if(first[i]<100001)  //Maane this character is coming in the string
            {
                int mn=100001;
                for(int j=(i+1);j<26;j++)
                {
                    mn=min(mn,first[j]);            //Badha charater choote character se konse min index pe aarha hai yehh tohh hmme isse pta chll jaayega
                }
                if(mn<first[i])
                {
                    return Swap(a,i+'a',a[mn]);
                }
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