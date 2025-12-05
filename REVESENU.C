#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,g=1;
clrscr();
printf("Enter the number for pyramidal pattern:");
scanf("%d",&n);
for(i=n;i>=1;--i) {
	 for(j=i;j>=1;--j){
		printf("%d",g);
		}
	printf("\n");
	}
getch();
}