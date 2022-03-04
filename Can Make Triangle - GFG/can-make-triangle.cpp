// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    bool isTriangle(vector<int> &nums,int i,int j)
    {
        int a=nums[i];    
        int b=nums[i+1];    
        int c=nums[i+2];
        if(a==max({a,b,c}))
        {
            if(a>=(b+c))
            return false;
            else
            return true;
        }
        if(b==max({a,b,c}))
        {
            if(b>=(a+c))
            return false;
            else
            return true;
        }
        if(c==max({a,b,c}))
        {
            if(c>=(b+a))
            return false;
            else
            return true;
        }
    }
    
    
    vector<int> canMakeTriangle(vector<int> nums, int n){
        // code here
        vector<int> ans;
        int i=0;
        int j=0;
        while(j<n)
        {
            if((j-i+1)<3)
            {
                j++;
            }
            else if((j-i+1)==3)
            {
                ans.push_back(isTriangle(nums,i,j));
                i++;
                j++;
            }
        }
        return ans;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
            cin>>A[i];
        Solution ob;
        auto ans = ob.canMakeTriangle(A, N);
        for(int i=0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
        
    }

    return 0; 
}   // } Driver Code Ends