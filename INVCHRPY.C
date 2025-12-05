#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,rows;
char ch='A';
clrscr();
printf("Enter the rows:");
scanf("%d",&rows);
for(i=rows;i>=0;i--){
for(j=0;j<=i;j++){
printf("%c",ch);
ch++;
}
printf("\n");
}
getch();
}