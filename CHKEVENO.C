#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
if(n%2==0){
printf("Entered number is even i.e.:%d");
}
else{
printf("Entered number is odd i.e.:%d");
}
getch();
}