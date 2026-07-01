//write a loop program to print two digit even numbers whose sum of digits is 6


#include <stdio.h>
int main()
{
    int a;
    a=24;
   
    loop:if (a<70)
    {
        printf("%d\n",a);
        a=(a+18);
        goto loop;
    }
 
}