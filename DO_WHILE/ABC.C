#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char n='A';
clrscr();
i=1;
do{
j=1;
do{
printf("%c",n++);
j++;
}while(j<=i);
i++;
printf("\n");
}while(i<=5);
getch();
}
//for
// abcde
// fghi
// jkl
// mn
// o
// do=i--,i>=1,i=5