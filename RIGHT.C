#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,rows;
clrscr();
printf("Enter the rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
for(j=i;j<=rows;j++){
printf(" ");
}
for(k=1;k<=i;k++){
printf("*");
}
printf("\n");
}
getch();
}