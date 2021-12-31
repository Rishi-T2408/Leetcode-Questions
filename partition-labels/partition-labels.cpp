class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<int,int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]=i;
        }
        int i=0;
        int j;
        int start,end;
        vector<int> v;
        while(i<s.length())
        {
            start=i;
            end=mp[s[i]];
            for(j=i;j<=end;j++)
            {
                end=max(mp[s[j]],end);
            }
            v.push_back(end-start+1);
            i=j;
        }
        
        return v;
    }
};