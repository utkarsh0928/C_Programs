#include<stdio.h>
void main(){
int i,pos,arr[50],num,size;
printf("Enter the size of array:\n");
scanf("%d",&size);
printf("Enter the elements of array:\n");
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
printf("Enter the number:\n");
scanf("%d",&num);
printf("Enter the position where new element inserted:\n");
scanf("%d",&pos);
if (pos<=0 || pos>size+1){
printf("Invalid Position");
}
else{
for(i=size-1;i>=0;i--){
arr[i+1]=arr[i];
}
arr[0]=num;
size++;
}
printf("New array is:\n");
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
}
