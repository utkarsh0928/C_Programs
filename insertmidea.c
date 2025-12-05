#include<stdio.h>
int main()
{
    int size,i,n,arr[100];
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the elements in middle:\n");
    scanf("%d",&n);
    for(i=size;i>size/2;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[size/2]=n;
    size++;
    printf("Resultant Array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}