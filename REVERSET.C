#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter the table number to print:");
scanf("%d",&n);
for(i=10;i>=1;i--)
printf("%d\n",i*n);
getch();
}