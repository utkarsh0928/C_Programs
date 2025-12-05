#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si;
clrscr();
printf("Enter the principle");
scanf("%f",&p);
printf("Enter the rate");
scanf("%f",&r);
printf("Enter the time");
scanf("%f",&t);
si=(p*r*t)/100;
printf("The simple intrest of the given information is: %f",si);
getch();
}