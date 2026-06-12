#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    if ((a/10)>(a%10))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}