#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,a=0,b=1,c;
clrscr();
printf("Enter the number");
scanf("%d",&num);
printf("Fabonacci Series of entered num %d: %d,%d,",num,a,b);
for(i=1;i<=num;i++){
c=a+b;
a=b;
b=c;
printf("%d,",c);
}
getch();
}
