#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,array[3][3]={1,2,3,4,5,6,7,8,9};
clrscr();
printf("Elements of 2-D array:\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d",array[i][j]);
}
printf("\n");
}
getch();
}