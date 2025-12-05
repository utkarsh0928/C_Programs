#include<stdio.h>
#include<conio.h>
void main()
{
int num,rev=0,rem,temp;
clrscr();
printf("Enter the number to check palindrome condition: ");
scanf("%d",&num);
temp=num;
while(num>0){
	rem = num % 10;
	rev = rev * 10 + rem;
	num /= 10;
}
if(rev==temp){
printf("The given number %d is palindrome",temp);
}
else{
printf("The given number %d is not palindrome",temp);
}
getch();

}