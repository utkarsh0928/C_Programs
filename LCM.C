#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,max;
clrscr();
printf("Enter the number a and b: ");
scanf("%d%d",&a,&b);
if(a>b){
max=a;
}
if(b>a){
max=b;
}
while(1)
{
if (max%a==0 &&max%b==0){
printf("The LCM of %d and %d is %d",a,b,max);
break;
}
++max;
getch();
}
