//write a loop program to print a two digit odd numbers whose sum of digits is 7


#include <stdio.h>
int main()
{
    int a;
    a=25;
   
    loop:if (a<79)
    {
        printf("%d\n",a);
        a=(a+18);
        goto loop;
    }
 
}