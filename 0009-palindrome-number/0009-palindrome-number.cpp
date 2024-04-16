class Solution {
public:
    int reverse(int x) {
        int ans=0, rem;
        while(x)
        {
            rem=x%10;
            x=x/10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
                return 0;
            ans=ans*10+rem;
        }
        return ans;
    }
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int ans=reverse(x);
            if(ans==x)
                return true;
        return false;
        
    }
};