#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("The alphabets from A to z are:\n");
for(ch='A';ch<='Z';ch++){
printf("%c,",ch);
}
printf("\n");
for(ch='a';ch<='z';ch++){
printf("%c,",ch);
}
getch();
}