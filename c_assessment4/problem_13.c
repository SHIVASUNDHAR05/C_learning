//write a loop program to print 1 to 5 on one by one


#include <stdio.h>
int main()
{
    int a; 
    a=123456;
    
    
    loop:if (a>0)
    {
          printf("%d",a%10);
        a=a/10;
         
       
        goto loop;
     }
       
 }
 