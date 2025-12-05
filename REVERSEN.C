#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter the number range to print:");
scanf("%d",&n);
for(i=n;i>=0;i--)
printf("%d\n",i);
getch();
}