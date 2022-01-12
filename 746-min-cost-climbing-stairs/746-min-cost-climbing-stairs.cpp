class Solution {
public:
  
    int minCostClimbingStairs(vector<int>& cost) {
        int first=cost[0];
        int second=cost[1];
        int temp;
        for(int i=2;i<cost.size();i++)
        {
            temp=cost[i]+min(first,second);
            first=second;
            second=temp;
        }
        return min(first,second);
    }
};