#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter the rows:");
scanf("%d",&n);
i=1;
do{
j=1;
do{
printf("%d",j);
j++;
}while(j<=i);
i++;
printf("\n");
}while(i<=n);
getch();
}