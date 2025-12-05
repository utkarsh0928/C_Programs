#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp,p;
clrscr();
printf("Enter the number: ");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
p=(p)+(rem*rem*rem);
n=n/10;
}
if(temp==p)
{
printf("The number is armstrong %d",temp);
}
else{
printf("The nummber is not armstrong %d",temp);
getch();

}