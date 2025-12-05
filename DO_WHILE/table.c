#include<stdio.h>
void main()
{
    int i=1,num;
    printf("Enter the number:");
    scanf("%d",&num);
    do{
        printf("%dx%d=%d\n",num,i,num*i);
    }while(i++<11);
}
