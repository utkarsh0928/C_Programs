#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
if(n==0)
{
printf("%d",fact);
}
else
{
for(i=1;i<=n;i++)
{
fact=fact*i;
}
}
printf("\n%d",fact);
getch();
}
