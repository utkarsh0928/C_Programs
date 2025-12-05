#include<stdio.h>
#include<conio.h>
int sum(int a, int b);   //declaration

int main(){
	int a,b;
	clrscr();
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	int s=sum(a,b);
	printf("The sum is:%d",s);
	getch();
	return 0;
}

int sum(int a, int b){
	return a+b;
}
