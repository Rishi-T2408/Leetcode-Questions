class Solution {
public:
    int getSum(int a, int b) {
        if(b>=0)
        for(int i=1;i<=b;i++) a++;
        else{
            for(int i=1;i<=abs(b);i++)
            {
                a--;
            }
        }
        return a;
        
    }
};