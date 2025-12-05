#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,num;
printf("Enter the number a: ");
scanf("%d",&a);
printf("Enter the number b: ");
scanf("%d",&b);
num=a;
a=b;
b=num;
printf("The swaped number are%d,%d",a,b);
clrscr();
getch();

}