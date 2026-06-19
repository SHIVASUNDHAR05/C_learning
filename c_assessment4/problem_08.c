//write a loop program to print odd  1 to 9 on one by one


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