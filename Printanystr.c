#include<stdio.h>//header_file for input and output function
#include<conio.h> //header_file for console function clr()and getch()

void main()//function_name 

{
c ch;//defining datatype variable_name
clrscr();//clearscreen
printf("Enter the name:");//display the string entered in function
scanf("%c",&ch);//input_fucntion where %c is character format specifier and
				//&ch is address of variable where data is stored
printf("%c",ch);//displaying the data entered in input function with calling variable_name
getch();//reads character continuously to stop screen after running program

}