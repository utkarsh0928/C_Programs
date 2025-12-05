#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
double a,b;
clrscr();
while(1){
printf("Enter the operation+,-,*,/ or if you want to exit press x");
scanf("%c",&ch);
if(ch=='x')
break;
printf("Enter the two numbers a,b:");
scanf("%lf%lf",&a,&b);
switch(ch){
case '+':
printf("%.1lf+%.1lf=%.1lf\n"a,b,a+b);
break;
case '-':
printf("%.1lf-%.1lf=%.1lf\n"a,b,a-b);
break;
case '*':
printf("%.1lf*%.1lf=%.1lf\n"a,b,a*b);
break;
case '/':
printf("%.1lf/%.1lf=%.1lf\n"a,b,a/b);
break;
default:
printf(""Entered the wrong operation!");
}
}
getch();
}