#include<stdio.h>
#include<conio.h>
void calculatePrice(float value);   //declaration

int main(){
	float value=100.0;
	clrscr();
	printf("actual value:%.2f\n",value);
	calculatePrice(value);
	getch();
	return 0;
}

void calculatePrice(float value){
	value=value+(0.18*value);
	printf("final price:%.2f",value);
}