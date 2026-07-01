//write a loop program to print the number in reverse order


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
 