#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows,space;
clrscr();
printf("Enter the rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
	for(space=1;space<=rows-i;space++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%d",j);
	}
	for(j=i-1;j>=1;j--)
	{
	printf("%d",j);
	}
	printf("\n");
}
getch();
}