class Solution {
public:
    string removeOccurrences(string s, string part) {
        if(part.length()==0) return s;
        while(s.length()>0 && s.find(part)<s.length())
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};