#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("Enter the character: ");
scanf("%c",&ch);
if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
printf("%c, The character is vowel",ch);
}
else{
printf("%c The character is consonent",ch);
}
clrscr();

getch();

}