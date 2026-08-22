#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 numbers :\n");
scanf("%d %d %d",&a,&b,&c);
if(a>=b)
{
    if(a>=c)
    {printf("'A' is greater than 'C'\n ");}

}
else
{
    if(b>=c)
    {
        printf("'B' is greater than 'C'\n");
    }
    else
    {
        printf("'C' is greater than 'B'\n");
    }
}

}
