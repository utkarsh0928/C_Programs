#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, arithmetic;
    clrscr();
    
    printf("Four operations available \naddition use 1,\nsubtraction use 2,\nmultiplication use 3,\ndivision use 4");
    printf("\nEnter the operation: ");
    scanf("%d", &arithmetic); // Corrected the scanf statement
    
    printf("Enter the number1: ");
    scanf("%d", &a);
    printf("Enter the number2: ");
    scanf("%d", &b);
    
    switch(arithmetic) {
        case 1:
	    printf("Addition: %d + %d = %d", a, b, a + b);
            break;
        case 2:
            printf("Subtraction: %d - %d = %d", a, b, a - b);
            break;
        case 3:
            printf("Multiplication: %d * %d = %d", a, b, a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Division: %d / %d = %.2f", a, b, (float)a / b); // Use float for decimal division
            } else {
                printf("Division by zero is not allowed");
            }
            break;
        default:
            printf("Invalid Operation");
    }
    getch();
}
