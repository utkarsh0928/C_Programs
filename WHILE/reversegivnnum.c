#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0,rem,temp;
clrscr();
printf("Enter the number to reverse: ");
scanf("%d",&num);
temp=num;
while(num>0){
 rem = num % 10;
	rev = rev * 10 + rem;
	num /= 10;
}
printf("Reversed number of %d is %d",temp,rev);
getch();

}