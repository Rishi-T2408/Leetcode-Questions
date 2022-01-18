class Solution {
public:
    //Recursively hoorha hai 
    //Mgrr jiss question mai iterative chahiye vohhh nhi hooparha
    int maxScoreSightseeingPair(vector<int>& values) {
        
        //Copied code hai mgrr I know how iit is working on
        int prev=values[0]+0;  //This shows that prev is not only element value but the (value+index) of that element 
        int ans=INT_MIN;
        for(int i=1;i<values.size();i++)
        {
            ans=max(ans,(prev+values[i]-i));
            prev=max(prev,values[i]+i);
        }
        return ans; 
    }
};