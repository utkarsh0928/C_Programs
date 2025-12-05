#include<stdio.h>
#include<conio.h>
void printnamaste();   //declaration
void printbonjour();

int main(){
	clrscr();
	printf("Enter the f for french and i for indian:");
	char ch;
	scanf("%c",&ch);
	if(ch=='i'){
	printnamaste();
	}
	else{
	printbonjour();	 //function call
	}
	getch();
	return 0;
}

void printnamaste(){
	printf("Namaste!");  //function declaration
}

void printbonjour(){
	printf("Bonjour!");
}
