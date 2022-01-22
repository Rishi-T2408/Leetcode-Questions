class Solution {
public:
    bool isUgly(int n) {
        //Every number can be represented as the multiple of prime factors and this theory is called prime factorization of number
        if(n<=0)
        {
            return false;       //Negative number can never be represented as an multiple of prime factors only
        }
        if(n>0&&n<=6)
        {
            return true;
        }
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else if(n%3==0)
            {
                n=n/3;
            }
            else if(n%5==0)
            {
                n=n/5;
            }
            else{
                return false;
            }
        }
        return true;
    }
};