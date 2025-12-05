#include<stdio.h>
#include<conio.h>
float convertTemp(float Celsius);

int main()
{
float farh;
farh=convertTemp(37.0);
clrscr();
printf("Far:%f",farh);
getch();
return 0;
}

float convertTemp(float Celsius)
{
float farh;
farh=Celsius*(9.0/5.0)+32;
return farh;
}