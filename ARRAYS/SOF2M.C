#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2], b[2][2], c[2][2], i,j;
clrscr();
printf("Enter the elements of first matrix:\n");
for(i=0;i<=1;i++){
for(j=0;j<2;j++){
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of second matrix:\n");
for(i=0;i<=1;i++){
for(j=0;j<2;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<=1;i++){
for(j=0;j<=1;j++){
c[i][j]=a[i][j]+b[i][j];
}
}
printf("The sum of two matrix is:\n");
for(i=0;i<=1;i++){
for(j=0;j<=1;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}
getch();
}