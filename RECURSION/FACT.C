#include<stdio.h>
#include<conio.h>
int fact(int n);

int main()
{
clrscr();
printf("The factorial is:%d",fact(5));
getch();
return 0;
}

int fact(int n)
{
int factNm1,factN;
if(n==0)
{
	return 1;
}
factNm1=fact(n-1);
factN=factNm1*n;
return factN;
}