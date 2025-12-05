#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[50], i, size, pos;
    clrscr();

    printf("Enter the number of elements:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++)
    {
	scanf("%d", &arr[i]);
    }

    printf("Define the position of the array you want to delete:\n");
    scanf("%d", &pos);

    if (pos >= size + 1)
    {
	printf("Deletion is not possible!");
    }
    else
    {
	for (i = pos - 1; i < size - 1; i++)
	{
	    arr[i] = arr[i + 1];
	}
	size--;
    }

    printf("New array is:\n");
    for (i = 0; i < size; i++)
    {
	printf("%d ", arr[i]);
    }

    getch();
}
