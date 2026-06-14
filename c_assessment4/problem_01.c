//write a loop program to print 1 to 5 on one by one


#include <stdio.h>
int main()
{
    int a;
    a=1;
   
    loop:if (a<6)
    {
        printf("%d\n",a);
        a++;
        goto loop;
    }
 
}