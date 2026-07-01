//write a loop program to print the number of digits in a number


#include <stdio.h>
int main()
{
    int a=24344;
    int count=0;
    loop:if (a>9)
    {
        count=count+1;
        a=a/10; 
       
        
        goto loop;
    }
  printf("%d\n",count+1);
}