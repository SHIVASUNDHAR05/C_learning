#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=x-((((x%100)%2)*((x%10)%2))*5);
    printf("Result:%d",y);  
}
