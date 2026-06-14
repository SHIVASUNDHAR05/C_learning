//write a loop program to print sum of 6 to 1  =21


#include <stdio.h>
int main()
{
    int a,sum;
    a=6, sum=0;
   
    loop:if (a>0)
    {
        sum= sum + a;
        a--;
        goto loop;
    }
 
    printf("%d", sum);
}