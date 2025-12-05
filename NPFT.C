#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,k,l;
printf("Enter the rows: ");
scanf("%d",&a);
for(i=1;i<=a;i++){
for(j=1;j<=a-i;j++){
printf(" ");
}
for(k=1;k<=i;k++){
printf("%d",k);
}
for(l=1;l<=i;l++){
printf("%d",l);
}
printf("\n");
}
getch();
}
