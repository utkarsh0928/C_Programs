#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],i,j,r,c,sum;
clrscr();
printf("Enter the rows of Matrix A:\n");
scanf("%d",&r);
printf("Enter the columns of Matrix A:\n");
scanf("%d",&c);
printf("Enter the elements of Matrix A:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("Entered Matrix A is:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d  ",a[i][j]);
	}
	printf("\n");
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