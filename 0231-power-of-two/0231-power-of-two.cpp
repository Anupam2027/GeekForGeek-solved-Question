class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        //Second  Method
        int rem;
        if(n<1)
            return false;
        while(n !=1)
        {
            rem=n%2;
            if(rem != 0)
                return false;
            n=n/2;
        }
        return true;
    }
};