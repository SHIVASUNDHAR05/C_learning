#include<stdio.h>
int main ()
{
    int x;
    x = 123456;
    int lastDigit, firstDigit, digits = 1, result;
    
    lastDigit = x % 10;
    
    loop: if(x / digits >= 10)
        {
         digits *= 10;
         goto loop;
        }
    
    firstDigit = x / digits;
    result = x - firstDigit * digits  
               - lastDigit            
               + lastDigit * digits   
               + firstDigit;          
    
    printf("Input  : %d\n", 123456);
    printf("Output : %d\n", result);
}