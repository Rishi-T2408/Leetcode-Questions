class Solution {
public:
    int mySqrt(int x) {
        //Square root of an number is calculated using the binary search
        long long int start=1;
        long int end=x/2;
        if(x==1 || x==0) return x;
        while(start<=end)
        {
            long long int mid=(start+end)/2;
            if(mid*mid<=x && (mid+1)*(mid+1)>x)
            {
                return mid;
            }
            else if(mid*mid<x)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};