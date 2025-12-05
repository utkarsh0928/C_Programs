#include<stdio.h>
#include<conio.h>
void printhello();   //declaration

int main(){
	clrscr();
	printhello();
	printhello();          //function call
	return 0;
}

void printhello(){
	printf("Hello!\n");
	printf("My name is Utkarsh\n");   //function declaration
	getch();
}
