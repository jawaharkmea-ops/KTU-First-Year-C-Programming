#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Number=%d:\n",n);
        printf("The given number is negative");
    }
    else
    {
        printf("The number is positive\n");
    }

    return 0;
}
