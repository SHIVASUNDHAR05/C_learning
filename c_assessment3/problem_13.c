#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    if (((a/1000)!=((a%1000)/100))==(((a/10)%10)==((a%10))))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}