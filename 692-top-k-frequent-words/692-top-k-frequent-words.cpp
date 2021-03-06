class Solution {
public:
    static bool comp(pair<string,int> p1,pair<string,int> p2)
    {
       if(p1.second==p2.second)
       {
           return p1.first<p2.first;
       }
       return p1.second>p2.second; 
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        vector<pair<string,int>> vp;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            vp.push_back({it->first,it->second});
        }
        sort(vp.begin(),vp.end(),comp);
        vector<string> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(vp[i].first);
        }
        return ans;
    }
};