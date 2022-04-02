class Solution {
public:
    bool isPalindrome(string s)
    {
        int n=s.length();
        int i=0;
        int j=(n-1);
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
       int n=s.length();
       string p=s;
       if(isPalindrome(s))
       {
           return true;
       }
       else{
           int i=0;
           int j=n-1;
           while(i<j)
           {
               if(s[i]!=s[j])
               {
                   p.erase(p.begin()+i);
                   s.erase(s.begin()+j);
                   if(isPalindrome(s)||isPalindrome(p)) return true;
                   else return false;
               }
               i++;
               j--;
           }
           return false;
       }
       return false;
    }
};