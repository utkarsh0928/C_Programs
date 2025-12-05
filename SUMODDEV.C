#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum_even=0,sum_odd=0;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2==0){
sum_even+=i;
}
else{
sum_odd+=i;
}
}
printf("Sum of even number is %d\n",sum_even);
printf("Sum of odd number is %d",sum_odd);
getch();
}









