#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,min,max;
clrscr();
printf("How many elements in an array:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
min=a[0];
max=a[0];
for(i=0;i<n;i++)
{
	if(max<a[i])
	{
		max=a[i];
	}
	if(min>a[i])
	{
		min=a[i];
	}
}
printf("\nMaximum element in the array is:%d",max);
printf("\nMinimum element in the array is:%d",min);
getch();
}