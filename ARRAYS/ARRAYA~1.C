//#include<stdio.h>

/*void main()
{
flaot, a[5],sum, i;
clrscr();
printf("Enter numbers\n");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
sum+=a[i];
}
printf("Average=%d",sum);
getch();
}*/

#include <stdio.h>
#include<conio.h>

void main() {
float a[5], sum=0 , average;
int i;
clrscr();
printf("Enter numbers:\n");
for (i = 0; i < 5; i++) {
scanf("%f", &a[i]);
sum += a[i];
}
average = sum / 5; 
printf("Average = %f\n", average);
getch();
}
