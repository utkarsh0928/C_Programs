#include<stdio.h>
#include<conio.h>

float sqrarea(float side);
float carea(float r);
float recarea(float a, float b);

int main(){
	float side=4.0;//,r=4.0,a=9.0,b=5.2;
	clrscr();
	sqrarea(side);
	printf("The square of given side is %.2f",side);
      //carea(r);
      //printf("The area of circle of given radius is %.2f",r);
      //recarea(a,b);
      //printf("The area of rectangle of given side a and b is %.2f",(a,b));
	getch();
	return 0;
}

float sqrarea(float side){
	return side*side;
}
float carea(float r){
	return 3.14*r*r;
}
float recarea(float a,float b){
	return a*b;
}

