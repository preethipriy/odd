#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,m=0;
scanf("%d,%d",&n,&k);
int a[5];
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=k;i++)
{
m=m+a[i];
}
printf("sum is %d",m);
}
