#include <stdio.h>
#include<conio.h>
void main() {
int i, num;
     num = 100;
    clrscr();
    printf("The factors of %d are: ", num);
    for ( i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    getch();
}
