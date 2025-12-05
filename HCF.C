#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,hcf=1,i,smaller;
clrscr();
printf("Enter the number 1:");
scanf("%d",&x);
printf("Enter the number 2:");
scanf("%d",&y);
if (x<y){
smaller=x;
}
else{
smaller=y;
}
for(i=1;i<=smaller;i++){
if (x%i==0 && y%i==0)
hcf=i;
}
printf("The hcf of given two number is: %d",hcf);
getch();
}