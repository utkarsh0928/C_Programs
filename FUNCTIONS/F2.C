#include<stdio.h>
#include<conio.h>
void printhello();   //declaration
void goodbye();
int main(){
	clrscr();
	printhello();       //fucntion call
	goodbye();          //function call
	getch();
	return 0;
}

void printhello(){
	printf("Hello!\n"); //function declaration
}
void goodbye(){
	printf("Good Bye!");
}