#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter the number");
scanf("%d",&num);
if(num<0){
printf("%d num is negative",num);
}
else if (num==0){
printf("%d num is zero",num);
}
else{ 
printf("%d num is positive",num);
}
}
getch();
}