#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3], b[3][3], i,j,m=3,n=3;
clrscr();
printf("Enter the elements of the matrix A:\n");
{
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d",&a[i][j]);
b[j][i]=a[i][j];
}
}
printf("The transpose of matrix A is \n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d ",b[i][j]);
}
printf("\n");
}
}
getch();
}