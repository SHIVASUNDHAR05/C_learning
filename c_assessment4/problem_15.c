//write a loop program to reduce the first digit if last digit is odd number

#include <stdio.h>
int main()
{
    int a,count,b,first_digit;
    a=12345;
    b=a;
    count=1;
    if ((a%2)==1)
    {
       loop:if (a>9)
       {
           count=count*10;
           a=a/10;
           goto loop;
        }
        first_digit=b-count;
        printf("%d",first_digit);
   }
   else{
    printf("%d",b);
   }
}