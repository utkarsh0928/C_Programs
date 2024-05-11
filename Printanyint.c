#include<stdio.h> //header_file for input and output function
#include<conio.h> //header_file for console function clr()and getch()
void main() //function_name 
{
int num; //defining datatype variable_name
clrscr(); //clearscreen

printf("Enter the integer:"); //display the string entered in function
scanf("%d",&num); //input_fucntion where %d is int format specifier and
				//&num is address of variable where data is stored
printf("%d",num);  //displaying the data entered in input function with calling variable_name

getch(); //reads character continuously to stop screen after running program

}