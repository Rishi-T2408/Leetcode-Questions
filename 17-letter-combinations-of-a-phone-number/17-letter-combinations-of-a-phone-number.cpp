class Solution {
public:
    void Solve(int i,string str,string dig,vector<string> &ans,unordered_map<char,string> &mp)
    {   
        if(i==dig.size())
        {
            ans.push_back(str);
            return ;
        }
        for(auto ch:mp[dig[i]])   //for example of 23 for 2 it will give "abc" via iteration mode 
        {
            Solve(i+1,str+ch,dig,ans,mp);
        }
        
    }
    
    vector<string> letterCombinations(string dig) {
        unordered_map<char,string> mp;
        mp.insert({'1',""});
        mp.insert({'2',"abc"});
        mp.insert({'3',"def"});
        mp.insert({'4',"ghi"});
        mp.insert({'5',"jkl"});
        mp.insert({'6',"mno"});
        mp.insert({'7',"pqrs"});
        mp.insert({'8',"tuv"});
        mp.insert({'9',"wxyz"});
        vector<string> ans;
        if(dig.size()==0)
        {
            return ans;
        }
        Solve(0,"",dig,ans,mp);
        return ans;
    }
};