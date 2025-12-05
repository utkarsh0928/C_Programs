#include<stdio.h>
#include<conio.h>
void main()
{
float fah,cel;
printf("Enter the number a and b");
scanf("%f",&cel);
fah=cel*9/5+32;
printf("The Fahrenheit value of %.2f is:%.2f",cel,fah);
clrscr();
getch();

}