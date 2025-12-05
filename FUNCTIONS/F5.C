#include<stdio.h>
#include<conio.h>
void table(int n);

int main(){
	int n;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	table(n);
	getch();
	return 0;
}

void table(int n){
	for(int i=1;i<=10;i++)
	{
		printf("%d\n",i*n);
	}
}