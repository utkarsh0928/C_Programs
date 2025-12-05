#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,temp,rem;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
	rem=n%10;
	sum=sum+(rem*rem*rem);
	n=n/10;
}
if(temp==sum)
{
	printf("Number is Armstrong!%d",temp);
}
else
{
	printf("Number is Not Armstrong!%d",temp);
}
getch();
}