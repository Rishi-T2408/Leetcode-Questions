// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    long long getNumber(long long int num)
    {
        string str=to_string(num);
        int n=str.length();
        int i=n/2-1;
        if(n%2!=0) i++;
        int j=n/2;
        while(j<n)
        {
            str[j]=str[i];
            j++;
            i--;
        }
        return stoll(str);
    }

	long long int closestPalindrome(long long int num){
	    // Code here
	    long long ans=getNumber(num);
	    long long gap=abs(ans-num);  //abs hai tohh kuch tension nhi lene ka
	    for(int i=0;i<15;i++)
	    {
	        
	        //Now in this loop I will check for num+1,num+10,num+100,num+1000 etc till 10 ki power 15
	        //And it will be same for subtration so it is easy peacy 
	        long long z=pow(10,i);
	        if(num-z>0)  
	        {
	            long long temp=getNumber(num-z);
	            if(gap>=abs(temp-num))   //When the gap is eqal then we have to take smaller number from it 
	            {
	                if(gap==abs(temp-num)) ans=min(ans,temp);
	                else ans=temp;  //But when we are having smaller gap now or absoulte difference smaller now then we should take number will less gap so hence it also done
	            }
	        }
	        
	        long long maxx=1e15;
	        if(num+z<maxx)
	        {
	            long long temp=getNumber(num+z);
                 if(gap>=abs(temp-num))
                 {
                     if(gap==abs(temp-num))ans=min(ans,temp);
                     else ans=temp;
                 } 
	        }
	    }
	    
	    return ans;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int num;
		cin >> num;
		Solution obj;
		long long int ans = obj.closestPalindrome(num);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends