class Solution {
public:
    string multiply(string A, string B) {
        int n=A.length();
        int m=B.length();
        if(A=="0" || B=="0")
        {
            return "0";
        }
        vector<int> v(n+m,0);
        for(int i=(n-1);i>=0;i--)
        {
            for(int j=(m-1);j>=0;j--)
            {
                v[i+j+1]+=(A[i]-'0')*(B[j]-'0');
                v[i+j]+=v[j+i+1]/10;
                v[i+j+1]=v[j+i+1]%10;
            }
        }
        string ans;
        int i=0;
        while(i<v.size() && v[i]==0)
        {
            i++;
        }
        while(i<v.size())
        {
            ans.push_back(v[i]+'0');
            i++;
        }
        return ans;
        
    }
};