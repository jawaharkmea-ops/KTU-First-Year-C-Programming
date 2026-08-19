#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    if((n%2)==0)
    {
        printf("Number=%d:\n",n);
        printf("The given number is even");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}
