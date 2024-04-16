class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return 0;
        int ans=0,rem,mul=1;
        while(n)
        {
            rem =n%2;
            rem=rem^1; //here we do XOR(^) operation for converting 0 into 1 and 1 into 0
            n=n/2;
            ans=ans+rem*mul;
            mul=mul*2;
        }
        return ans;
    }
};