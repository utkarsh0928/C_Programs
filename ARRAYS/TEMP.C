#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],i,j,r1,c1,r2,c2,sum;
clrscr();
printf("Enter the rows of Matrix A:\n");
scanf("%d",&r1);
printf("Enter the columns of Matrix A:\n");
scanf("%d",&c1);
printf("Enter the columns of Matrix A:\n");
scanf("%d",&r2);
printf("Enter the columns of Matrix A:\n");
scanf("%d",&c2);
printf("Enter the elements of Matrix A:\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
printf("The sum of rows and columns Matrix A is:\n");
for(i=0;i<r;i++)
{
	sum=0;
	for(j=0;j<c;j++)
	{
		sum+=a[i][j];
	}
	printf("The sum of Row %d is = %d",i,sum);
	printf("\n");
}
for(j=0;j<c;j++)
{
	sum=0;
	for(i=0;i<r;i++)
	{
		sum+=a[i][j];
	}
	printf("The sum of columns %d is = %d",j,sum);
	printf("\n");
}
getch();
}