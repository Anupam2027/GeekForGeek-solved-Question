class Solution {
public:
    int addDigits(int num) {
        if(num < -1 )
           return -1; 
        if( num < 10 )
            return num;
        
        int remain =num%10;
        int qous = num /10;
        return addDigits(remain+qous);
        
    }
};