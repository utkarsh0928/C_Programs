#include<stdio.h>
#include<conio.h>
void main()
{
int marks[5]={75,85,80,95,90},i;
clrscr();
printf("The marks of students are:");
for(i=0;i<=4;i++){
printf("\n%d",marks[i]);
}
getch();
}