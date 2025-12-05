#include<stdio.h>
#include<conio.h>
void main()
{
int n=100,i,fact=1;
clrscr();
printf("The factors of numbers between 1 to 100 are:");
for(i=2;i<=n;i++){
if(i%n==0){
printf("%d",i);
}
getch();
}