#include<stdio.h>
#include<conio.h>
void main
{
int a,b,c;
printf("enter any three numbers");
scanf("%d %d %d",a,b,c);
if(a>=b&&a>=c)
{
printf("a is large");
}
if(b>=a&&b>=c)
{
printf("b is large");
}
if(c>=a&&c>=b)
{
printf("c is large");
}
}
