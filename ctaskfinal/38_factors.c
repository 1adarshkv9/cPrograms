#include <stdio.h>

void factors() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    
}
