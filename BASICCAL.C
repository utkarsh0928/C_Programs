#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g;
clrscr();
printf("\nEnter the number a and b");
scanf("\%d%d",&a,&b);
c=a+b;
printf("\nAddition:%d",c);
d=a*b;
printf("\nMultiplication:%d",d);
e=a-b;
printf("\nSubstraction:%d",e);
f=a*a;
printf("\nSqaure:%d",f);
g=a/b;
printf("\nDivision:%d",g);
getch();
}