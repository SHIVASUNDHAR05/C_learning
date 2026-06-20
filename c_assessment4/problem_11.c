//write a loop program to print 1 to 5 on one by one


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