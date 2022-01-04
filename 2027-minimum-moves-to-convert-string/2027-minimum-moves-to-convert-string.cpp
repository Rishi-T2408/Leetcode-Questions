class Solution {
public:
    int minimumMoves(string s) {
        int count=0;
        //If an move contains X it is considered an move and count++ will happen
        int i=0;
        while(i<s.length())
        {
            if(s[i]=='X')
            {
                count++;
                i+=3;
            }
            else{
                i++;
            }
        }
        return count;
    }
};