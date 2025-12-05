#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,area,perimeter;
printf("Enter the number a:");
scanf("%f",&a);
printf("Enter the number b:");
scanf("%f",&b);
area=a*b;
perimeter=2*(a+b);
printf("Area and Perimeter:%d and %d",area,perimeter);
clrscr();
getch();
}