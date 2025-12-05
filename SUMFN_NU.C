#include<stdio.h>
#include<conio.h>

void main()
{
int i, n, sum = 0, m;
clrscr();
printf("Enter the number of elements: ");
scanf("%d", &n);
for(i = 1; i <= n; i++) {
printf("Enter number %d: ", i);
scanf("%d", &m);
sum += m;
}
printf("Sum of the entered numbers is: %d", sum);
getch();
}
