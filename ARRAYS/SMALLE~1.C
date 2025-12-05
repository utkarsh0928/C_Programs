#include<stdio.h>
#include<conio.h>
void main()
{
int small,a[100],i,n,s,pos;
clrscr();
printf("How many elements in an array:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
small=a[0];
pos=0;
for(i=1;i<n;i++){
if(small>a[i]){
small=a[i];
pos=i;
}
}
printf("The smallest of the entered no. is :%d\n",small);
printf("The position of the smallest no. is :%d",pos);
getch();
}