#include<stdio.h>
#include<conio.h>

void main()
{
    int num, remainder, originalnum, reversenum = 0;
    clrscr();
    printf("Enter the number: ");
    scanf("%d", &num);
    originalnum = num;
    
    while(num != 0)
    {
        remainder = num % 10;
        reversenum = reversenum * 10 + remainder;
        num /= 10;
    }
    
    if(originalnum == reversenum)
    {
        printf("%d is a palindrome number", reversenum);
    }
    else
    {
        printf("%d is not a palindrome number", reversenum);
    }
    
    getch();
}