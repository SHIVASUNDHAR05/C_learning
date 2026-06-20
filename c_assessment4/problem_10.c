//write a loop program to print sum of 1 to 5  =15


#include <stdio.h>
int main()
{
    int a,sum;
    a=71, sum=0;
   
    loop:if (a<80)
    {
        sum= sum + a;
        a=a+2;
        goto loop;
    }
 
    printf("%d", sum);
}