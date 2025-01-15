class Solution {
public:
    int minimizeXor(int num1, int num2) {
        
     int setBitNum2 = __builtin_popcount(num2);
     
     int val = 0;

     for(int i=31;i>=0 && setBitNum2 > 0 ;i--)
     {
         if(num1 & (1<<i) )
         {
            val |= (1<< i);
            setBitNum2--;
         }
     } 


    for(int i=0;i<31 & setBitNum2 >0 ;i++)
    {
        if( !(val & (1<<i)))
        {
             val |= (1<< i);
            setBitNum2--;
        }
    }
return val;    
    }
};
