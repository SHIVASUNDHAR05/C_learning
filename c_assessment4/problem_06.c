//write a loop program to print two digit odd numbers below 20


#include <stdio.h>
int main()
{
    int a;
    a=11;
   
    loop:if (a<20)
    {
        printf("%d\n",a);
        a=a+2;
        goto loop;
    }
 
}