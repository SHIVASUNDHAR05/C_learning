//write a loop program to print odd  1 to 9 on one by one


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