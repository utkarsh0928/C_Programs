#include<stdio.h>
void main(){
int i,pos,num,size,arr[100];
printf("Enter the size of array:\n");
scanf("%d",&size);
printf("Enter the elements of array:\n");
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
printf("Enter the number to add any position:\n");
scanf("%d",&num);
printf("Enter the position where new element inserted:\n");
scanf("%d",&pos);
for(i=size-1;i>=pos-1;i--){
arr[i+1]=arr[i];
}
arr[pos-1]=num;
size++;
printf("New array is:\n");
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
}
