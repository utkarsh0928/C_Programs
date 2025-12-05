#include<stdio.h>
#include<conio.h>
void main()
{
int r,i,j;
clrscr();
printf("Enter the rows: ");
scanf("%d",&r);
i=1;
do{
j=1;
do{
printf(" %d",i);
j++;
}while(j<=r);
printf("\n");
i++;
}while(i<=r+1);
getch();
}