#include <stdio.h>
#include <conio.h> // Only available in certain environments

int main() {
    int i, num, digit, sum, count,j, temp;

    printf("The Armstrong numbers between 1 to 1000 are: ");

    for (i = 1; i <= 1000; i++) {
	num = i;
	count = 0;
	sum = 0;

	// Count the number of digits in 'num'
	while (num != 0) {
	    num /= 10;
	    count++;
	}

	// Reset 'num' to 'i'
	num = i;

	// Calculate the sum of digits raised to the power of 'count'
	while (num != 0) {
	    digit = num % 10;

	    // Calculate 'digit' raised to the power of 'count'
	    temp =
	     digit;
	    for ( j = 1; j < count; j++) {
		digit *= temp;
	    }
	    sum += digit;
	    num /= 10;
	}

	// Check if 'i' is an Armstrong number and print if it is
	if (sum == i) {
	    printf("%d ", i);
	}
    }

    printf("\n");
    getch(); // Wait for a key press before closing (for some environments)
    return 0;
}
