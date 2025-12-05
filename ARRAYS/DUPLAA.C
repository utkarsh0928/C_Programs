#include <stdio.h>

int main() {
    int i, j, arr[5];

    printf("Enter the array elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicates are there!\n");
                return 0; 
            }
        }
    }


    printf("None duplicates!\n");
    return 0;
}
