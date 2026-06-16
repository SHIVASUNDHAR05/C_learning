#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=x-((((x/10)+(x%10))%2)*5);
    printf("Result:%d",y);  
}
