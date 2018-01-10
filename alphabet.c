#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter the character:%c",ch);
if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
{
printf("alphabet");
}
else
{
printf("no");
}
getch();
}
