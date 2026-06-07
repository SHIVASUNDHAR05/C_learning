#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=1+((x-1)%9);
    printf("Result:%d",y);  
}
