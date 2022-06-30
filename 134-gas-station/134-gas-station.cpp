class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int have=0;
        int need=0;
        for(int i=0;i<gas.size();i++)
        {
            have+=gas[i];
            need+=cost[i];
        }
        if(need>have)
        {
            return -1;
        }
        //Idhrr paahuch gye means we have an answer as hmare paas need se zyada hai tohh answer tohh hooga hii 
        int current=0;
        int st=0;
        for(int i=0;i<gas.size();i++)
        {
            current+=(gas[i]-cost[i]);
            if(current<0)
            {
                st=i+1;
                current=0;
            }
        }
        return st;

    }
};