//write a loop program to print the sum of digits of a number


#include <stdio.h>
int main()
{
    int a,sum; 
    a=24344;
    
    sum=0;
    loop:if (a>0)
    {
       
       
        sum=sum+(a%10);    
         a=a/10;
        goto loop;
    }
  printf("%d\n",sum+(a%10));
}