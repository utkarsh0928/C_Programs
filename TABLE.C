#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter the table number to print:");
scanf("%d",&n);
for(i=1;i<=10;i++)
printf("%d*%d=%d\n",n,i,i*n);
getch();
}