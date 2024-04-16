class Solution {
public:
    int reverse(int x) {
        // int num=x;
        // if(x<0)
        // num=abs(x);
        int ans=0, rem;
        
//         while(num !=0)
//         {
//             num=num/10;
//             count++;
//         } 
//         while(count >1)
//         {
//         mul=mul*10;
//             count--;
//         }
        
//         num=x;
//         if(x<0)
//         num=abs(x);
        
        while(x)
        {
            rem=x%10;
            x=x/10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
                return 0;
            ans=ans*10+rem;
           // mul=mul/10;
        }
        // if(x<0)
        // return (ans*-1);
        return ans;
    }
};