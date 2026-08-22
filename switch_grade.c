#include<stdio.h>
int main()
{
int grade='a';
switch(grade)
{
case'a':printf("A grade\n");
        break;
case'b':printf("B grade\n");
        break;
case'c':printf("C grade\n");
        break;
case'd':printf("D grade\n");
        break;
default:printf("What is your grade\n");
        break;
}
return 0;
}
