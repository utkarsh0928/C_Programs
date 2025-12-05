#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j;
clrscr();
printf("Enter the number for pyramidal pattern:");
scanf("%d",&n);
for(i=1;i<=n;++i) {
	 for(j=1;j<=i;++j){
		printf("%d",j);
		}
	printf("\n");
	}
getch();
}