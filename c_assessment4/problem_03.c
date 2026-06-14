//write a loop program to print sum of 1 to 5  =15


#include <stdio.h>
int main()
{
    int a,sum;
    a=1, sum=0;
   
    loop:if (a<6)
    {
        sum= sum + a;
        a++;
        goto loop;
    }
 
    printf("%d", sum);
}