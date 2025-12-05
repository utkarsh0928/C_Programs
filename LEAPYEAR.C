#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter year to check leap year condition:");
scanf("%d",&year);
if(year%100!=0&&year%4==0||year%400==0)
printf("%dEntered year is leap year");
	else
printf("%dEntered year is not leap year");
getch();
}
