class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char ch) {
        int n=letters.size();
        int l=0;
        int r=n-1;
        char res;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(letters[mid]==ch) 
            {
                l=mid+1;
            }
            if(letters[mid]>ch)
            {
                res=letters[mid];
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(l==n) return letters[0];
        return res;
    }
};