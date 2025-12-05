#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,count=0;
clrscr();
printf("Enter to check prime number condition: ");
scanf("%d",&num);
for(i=1;i<=num;i++){
if(num%i==0){
count++;
}
}
if(count==2){
printf("The number %d is prime number",num);
}
else{
printf("The number %d is not prime number",num);
}
getch();
}