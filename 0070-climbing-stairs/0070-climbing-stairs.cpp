class Solution {
public:
    int climbStairs(int n) {
        
           
        if(n<=1)
            return 1;
    
    int t1=1,t2=1,sum,sum1;
    sum1=t1+t2;
    for(int i=3;i<=n;i++)
    {
        sum=sum1;
        sum1=t2+sum;
        t2=sum;
    }
    return sum1;
        
    }  
};