#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,n,m;
clrscr();
printf("Enter the order of matrix\n");
scanf("%d",&n);
printf("Enter the matrix elements\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
printf("Matrix A is:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
getch();
}