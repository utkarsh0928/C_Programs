#include<stdio.h>
#include<conio.h>
void main()
{
int r,i,j;
clrscr();
printf("Enter the rows: ");
scanf("%d",&r);
for(i=1;i<=r+1;i++){
for(j=1;j<=r;j++){
printf(" %d",j);
}
printf("\n");
}
getch();
}