class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans;
       if(n==1)
           return true;
        int mul=1;
        while(n < INT_MAX || n>INT_MIN)
        {
            if(mul>INT_MAX/2 || mul <INT_MIN/2)
                return false;
        ans=2*mul;
        if(ans==n)
            return true;
        mul=mul*2;
        }
        
        return false;
    }
};