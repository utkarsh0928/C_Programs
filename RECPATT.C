#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,rows;
clrscr();
printf("Enter the rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
for(j=1;j<=rows;j++){
printf("");
}
for(k=1;k<=rows;k++){
printf("*");
}
for(l=k;l>=rows;l--){
printf("\n");
}
}
getch();
}