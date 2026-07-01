// write a loop program to print the fist digit in last and last digit in first of a number

#include <stdio.h>
int main()

{
    int a,b,first_digit,last_digit,mid_digit;
    a=123456;
    b=a;
    int count=1;
     loop:if (a>9)
    {
        count=count * 10;
        a=a/10; 
        
        goto loop;
    }
    first_digit=b%10;
    last_digit=b/count;    
    mid_digit=(b%count)/10;  
    printf("%d",first_digit);
    printf("%d",mid_digit);
 
    printf("%d",last_digit);
}