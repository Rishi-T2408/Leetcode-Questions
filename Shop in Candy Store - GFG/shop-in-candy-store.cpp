// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int can[], int N, int K)
    {
        // Write Your Code here
        vector<int> ans;
        sort(can,can+N);
        int i=0;
        int j=(N-1);
        int min_m=0;
        int max_m=0;
        while(i<=j)
        {
            min_m+=can[i];
            j-=K;
            i++;
        }
        ans.push_back(min_m);
        i=0;
        j=N-1;
        while(i<=j)
        {
            max_m+=can[j];
            i+=K;
            j--;
        }
        ans.push_back(max_m);
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
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends