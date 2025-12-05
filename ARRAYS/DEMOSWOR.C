#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n;
clrscr();
printf("HOW MANY NO TO STORE IN THE ARRAY:");
scanf("%d",&n);
printf("\nENTER THE NUMBERS:\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("THE CONTENTS OF ARRAY ARE:");
for(i=0;i<n;i++){
printf("\n%d",a[i]);
}
getch();
}