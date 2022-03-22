// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}// } Driver Code Ends


vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
    unordered_map<int,int> mp;
    mp[arr[0]]++;
    vector<int> nums;
    nums.push_back(-1);
    for(int i=1;i<n;i++)
    {
        int flag=0;
        int chk=arr[i]-1;
        while(chk>=0)
        {
            if(mp.find(chk)!=mp.end())
            {
                flag=1;
                nums.push_back(chk);
                break;
            }
            chk--;
        }
        if(flag==0) nums.push_back(-1);
        mp[arr[i]]++;
    }
    return nums;
}