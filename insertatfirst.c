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
    printf("Enter the elements at first:\n");
    scanf("%d",&n);
    for(i=size;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=n;
    size++;
    printf("Resultant Array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}